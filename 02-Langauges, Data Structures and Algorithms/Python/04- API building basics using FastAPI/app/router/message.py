from fastapi import Response, status, Depends, APIRouter
from fastapi.exceptions import HTTPException
from typing import List
from sqlalchemy.orm import Session
from .. import models, schemas
from ..database import get_db

# Using a router prefix can come in handy so every route will be prefixed by /message, and tag will improve the readibility in docs
router = APIRouter(
    prefix="/message",
    tags=["Message"]
)

@router.get("/", response_model=List[schemas.MessageResponse])
def get_message(response: Response, db: Session = Depends(get_db)):
    messages = db.query(models.Messages).all()
    print(messages)
    if not messages:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"No messages found")  
    else:
        return messages

@router.get("/{sender}", response_model=List[schemas.MessageResponse])
def get_message(sender: str, response: Response, db: Session = Depends(get_db)):
    messages = db.query(models.Messages).filter(models.Messages.sender == sender).all()
    print(messages)
    if len(messages) == 0:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"Username {sender} not found")  
    else:
        return messages


@router.post("/", status_code= status.HTTP_201_CREATED, response_model=schemas.Message)
def post_message(message: schemas.Message, db: Session = Depends(get_db)):
    db_msg = models.Messages(**message.dict())
    db.add(db_msg)
    db.commit()
    db.refresh(db_msg)
    return db_msg


@router.delete("/delete/{sender}/all", status_code = status.HTTP_204_NO_CONTENT)
def del_all_posts(sender: str, response:Response, db: Session = Depends(get_db)):
    result = db.query(models.Messages).filter(models.Messages.sender == sender)
    if not result.all() == []:
        result.delete(synchronize_session = False)
        db.commit()
        return Response(status_code= status.HTTP_204_NO_CONTENT)
    else:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"Username {sender} not found")

@router.delete("/delete/{sender}/{id}", status_code = status.HTTP_204_NO_CONTENT)
def del_post(sender: str, id: int, db: Session = Depends(get_db)):
    result = db.query(models.Messages).filter(models.Messages.sender == sender, models.Messages.id == id)
    if not result.first() == None:
        result.delete(synchronize_session = False)
        db.commit()
        return Response(status_code= status.HTTP_204_NO_CONTENT)
    else:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"Either {sender} is not registered or no messages with id {id} sent")



@router.put("/update/{sender}/{id}", status_code = status.HTTP_202_ACCEPTED, response_model=schemas.MessageUpdate)
def upd_post(sender: str, id: int, message: schemas.MessageUpdate, db: Session = Depends(get_db)):
    result = db.query(models.Messages).filter(models.Messages.sender == sender)
    if not result.first() == None:
        result.update(message.dict(), synchronize_session = False)
        db.commit()
        print(result.first())
        return result.first()
    else:
        raise HTTPException(status.HTTP_404_NOT_FOUND, f"Either {sender} is not registered or no messages with id {id} sent")
