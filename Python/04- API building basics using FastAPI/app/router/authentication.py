from fastapi import Response, status, Depends, APIRouter
from fastapi.exceptions import HTTPException
from typing import List
from sqlalchemy.orm import Session
from .. import models, schemas, utils
from ..database import get_db

router = APIRouter(
    tags=["Authentication"]
)

@router.post("/login")
def login_user(userCred: schemas.LoginCred, db: Session = Depends(get_db)):
    user = db.query(models.Users).filter(models.Users.email == userCred.email).first()
    if user == None:
        raise HTTPException(status.HTTP_404_NOT_FOUND, detail="User not found")

    if not utils.verifyPass(userCred.password, user.password):
        raise HTTPException(status.HTTP_404_NOT_FOUND, detail="Incorrect password")

    return {"key": "jwt"}

    