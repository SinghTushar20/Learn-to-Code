from pydantic import BaseModel, EmailStr

class Message(BaseModel):
    sender: str
    reciver: str
    message: str
    class Config:
        orm_mode = True

class MessageUpdate(BaseModel):
    message: str
    class Config:
        orm_mode = True

class MessageResponse(Message):
    # Telling python it's ok orm_model is same as dictionary
    class Config:
        orm_mode = True

class User(BaseModel):
    email: EmailStr
    password: str
    class Config:
        orm_mode = True

class UserCreate(BaseModel):
    email: EmailStr
    id: int
    class Config:
        orm_mode = True

class LoginCred(User):
    email: EmailStr
    password: str
    class Config:
        orm_mode = True