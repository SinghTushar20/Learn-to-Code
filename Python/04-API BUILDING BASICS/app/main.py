from fastapi import FastAPI
from fastapi.params import Body
from pydantic import BaseModel
from typing import Optional

app = FastAPI()


# Creating different path operation or Route
# GET is a http method other main methods are POST, PUT, DELETE
# NOTE: When we create multiple routes the first match is the only one get executed so ORDER does matter
@app.get("/")
def root():

    # We return a dictionary but fast api will covert it to JSON
    return {"Hello": "Worldo"}

# Define the schema and do the validation
class Message(BaseModel):
    user: str
    to: str
    message: str
    autoDestruct: bool = False # This made this particular parameter optional
    autoDestructTime: Optional[int] = None # Making a compltely optional field

users = {}

# Getting the data provided by user in a post request
@app.post("/message")
def post_message(message: Message):
    print(message)
    # Default method of every pydantic model (Schema) is .dict() that convert that model to a dict.
    if message.user in users.keys():
        users[message.user].append({"to": message.to, "message": message.message})
    else:
        users[message.user] = [{"to": message.to, "message": message.message}]
    print(users)
    return {"message": f"Message sent to {message.to}"}

# Using parameters in GET request but remember the parameters will be string if you want int then convert it inside the function
@app.get("/message/{user}")
def get_message(user: str):
    messages = users[user]
    return messages
