from fastapi import status, Depends, APIRouter
from fastapi.exceptions import HTTPException
from sqlalchemy.orm import Session
from .. import models, schemas, utils
from ..database import get_db

# Using a router prefix can come in handy so every route will be prefixed by /user, and tag will improve the readibility in docs
router = APIRouter(
    prefix="/user",
    tags=["User"]
)

@router.post("/", status_code= status.HTTP_201_CREATED, response_model=schemas.UserCreate)
def create_user(user: schemas.User, db: Session = Depends(get_db)):
    # Hashing the password
    user.password = utils.hashPass(user.password)
    db_user = models.Users(**user.dict())
    db.add(db_user)
    db.commit()
    db.refresh(db_user)
    return db_user

@router.get("/{id}", response_model=schemas.UserCreate)
def get_user(id: int, db: Session = Depends(get_db)):
    userInfo = db.query(models.Users).filter(models.Users.id == id).first()
    if userInfo == None:
        raise HTTPException(status.HTTP_404_NOT_FOUND, detail=f"User with user id {id} not found.")
    
    return userInfo;