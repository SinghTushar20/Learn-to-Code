# To run this use the command python -m uvicorn 0-Notes.notes_main_database:app --reload
from fastapi import FastAPI, Response, status
from fastapi.exceptions import HTTPException
from fastapi.params import Body
from pydantic import BaseModel
from typing import Optional
from datetime import datetime
import psycopg2
from psycopg2.extras import RealDictCursor

app = FastAPI()

# Database connection
while True:
    try:
        conn = psycopg2.connect(host="localhost",database="fastAPIdb", user="postgres", password="1205", cursor_factory=RealDictCursor)
        cur = conn.cursor()
        print("DB connected")
        break
    except Exception as e:
        print(f"DB connection failed, Error: {e}")

@app.get("/")
def root():
    return {"Status": "HomePage"}

@app.get("/message/{sender}")
def get_message(sender: str, response: Response):
    cur.execute("""SELECT * FROM "Messages" WHERE sender = %s""", (sender,))
    messages = cur.fetchall()
    print(messages)
    if len(messages) == 0:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"Username {sender} not found")  
    else:
        return messages

@app.get("/message")
def get_message(response: Response):
    cur.execute('SELECT * FROM "Messages"')
    messages = cur.fetchall()
    if not messages:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"No messages found")  
    else:
        return messages

class Message(BaseModel):
    sender: str
    reciver: str
    message: str

@app.post("/message", status_code= status.HTTP_201_CREATED)
def post_message(message: Message):
    # BAD make our DB vulnurable to SQL injection
    # cur.execute(f"""INSERT INTO "Messages" (sender,reciever,message) VALUES ('{message.sender}', '{message.reciver}', '{message.message}')""")
    cur.execute("""INSERT INTO "Messages" (sender,reciever,message) VALUES (%s, %s, %s)""",(message.sender, message.reciver, message.message))
    conn.commit()
    return {"message": f"Message sent to {message.reciver}"}

@app.delete("/message/delete/{sender}/all", status_code = status.HTTP_204_NO_CONTENT)
def del_all_posts(sender: str, response:Response):
    cur.execute("""DELETE FROM "Messages" WHERE sender LIKE %s RETURNING *""", (sender,))
    result = cur.fetchall()
    conn.commit()
    if not result == []:
        return Response(status_code= status.HTTP_204_NO_CONTENT)
    else:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"Username {sender} not found")

@app.delete("/message/delete/{sender}/{id}", status_code = status.HTTP_204_NO_CONTENT)
def del_post(sender: str,id: int):
    cur.execute("""DELETE FROM "Messages" WHERE sender LIKE %s AND id = %s RETURNING *""", (sender, id))
    result = cur.fetchall()
    conn.commit()
    if not result == []:
        return Response(status_code= status.HTTP_204_NO_CONTENT)
    else:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"Either {sender} is not registered or no messages with id {id} sent")

@app.put("/message/update/{sender}/{id}", status_code = status.HTTP_202_ACCEPTED)
def upd_post(sender: str,id: int, message: Message):
    cur.execute("""UPDATE "Messages" SET message=%s WHERE sender LIKE %s AND id = %s RETURNING *""", (message.message, sender, id))
    result = cur.fetchall()
    conn.commit()
    if not result == []:
        return {"status": "Message Updated"}
    else:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"Either {sender} is not registered or no messages with id {id} sent")

# cur.close()
# conn.close()