# To run this use the command python -m uvicorn 0-Notes.notes_main:app --reload
from fastapi import FastAPI, Response, status
from fastapi.exceptions import HTTPException
from fastapi.params import Body
from pydantic import BaseModel
from typing import Optional
from datetime import datetime

app = FastAPI()

users = {}

# Creating different path operation or Route
# GET is a http method other main methods are POST, PUT, DELETE
# NOTE: When we create multiple routes the first match is the only one get executed so ORDER does matter
@app.get("/")
def root():
    # We return a dictionary but fast api will covert it to JSON
    return {"Status": "HomePage"}

# Using parameters in GET request but remember the parameters will be string if you want int then convert it inside the function
@app.get("/message/{user}")
# Every request callback function has a response variable with it which will have the status code, we can also change that status code. 
def get_message(user: str, response: Response):
    if user in users.keys():
        messages: dict = users[user]
        return messages
    else:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"Username {user} not found")
        # response.status_code = status.HTTP_404_NOT_FOUND
        # return {"message": f"User not found"}

@app.get("/message")
def get_message(response: Response):
    if users == {}:
        # Raising exceptions
        raise HTTPException(status.HTTP_404_NOT_FOUND, "No messages yet")
        # response.status_code = status.HTTP_404_NOT_FOUND
        # return {"message": "No messages yet"}
    return users

# Define the schema and do the validation
class Message(BaseModel):
    user: str
    to: str
    message: str
    # autoDestruct: bool = False # This made this particular parameter optional
    # autoDestructTime: Optional[int] = None # Making a compltely optional field

# Getting the data provided by user in a post request
# To change the default status code we have to do that in the decorator
@app.post("/message", status_code= status.HTTP_201_CREATED)
def post_message(message: Message):
    print(message)
    # Default method of every pydantic model (Schema) is .dict() that convert that model to a dict.
    if message.user in users.keys():
        users[message.user].append({"to": message.to, "message": message.message, "id": datetime.now()})
    else:
        users[message.user] = [{"to": message.to, "message": message.message, "id": datetime.now()}]
    print(users)
    return {"message": f"Message sent to {message.to}"}

@app.delete("/message/delete/{user}/all", status_code = status.HTTP_204_NO_CONTENT)
def del_all_posts(user, response:Response):
    if user in users.keys():
        del users[user]
        return Response(status_code= status.HTTP_204_NO_CONTENT)
    else:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"Username {user} not found")
    A
@app.delete("/message/delete/{user}/{stamp}", status_code = status.HTTP_204_NO_CONTENT)
def del_post(user: str,stamp: datetime):
    if user in users.keys():
        for i, mgs in enumerate(users[user]):
            if mgs["id"] == stamp:
                users[user].pop(i)
                break
        else:
            raise HTTPException(status.HTTP_404_NOT_FOUND, f"No mgs with stamp id {stamp} found")
        return Response(status_code= status.HTTP_204_NO_CONTENT)
    else:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"Username {user} not found")

@app.put("/message/update/{user}/{stamp}", status_code = status.HTTP_202_ACCEPTED)
def upd_post(user: str,stamp: datetime, post: Message):
    if user in users.keys():
        for i, mgs in enumerate(users[user]):
            if mgs["id"] == stamp:
                post_dict = post.dict()
                del post_dict["user"]
                del post_dict["autoDestruct"]
                del post_dict["autoDestructTime"]
                post_dict["id"] = stamp
                users[user][i] = post_dict
                break
        else:
            raise HTTPException(status.HTTP_404_NOT_FOUND, f"No mgs with stamp id {stamp} found")
        return {"status", "Message Updated"}
    else:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"Username {user} not found")