from fastapi import FastAPI, Depends
from sqlalchemy.orm import Session
from . import models
from .database import engine, get_db
from .router import message, user, authentication

models.Base.metadata.create_all(bind=engine)

app = FastAPI()

app.include_router(message.router)
app.include_router(user.router)
app.include_router(authentication.router)

@app.get("/")
def root(db: Session = Depends(get_db)):
    return {"Status": f"{db}"}