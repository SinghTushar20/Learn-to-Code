from jose import JWTError, jwt
from datetime import datetime, timedelta
from . import schemas, database, models
from fastapi.security import OAuth2PasswordBearer
from fastapi import Depends, HTTPException, status
from sqlalchemy.orm import Session


SECRET_KEY = "afba2d9b9504d7facc0ea70e0f5adda220ce9dfd64c316fd6c38fb59f9e5c699"
ALGORITHM = "HS256"
ACCESS_TOKEN_EXPIRE_MINUTES = 60

oauth2_scheme = OAuth2PasswordBearer(tokenUrl= "login");

def create_access_token(data: dict):
    to_encode = data.copy()

    expire = datetime.utcnow() + timedelta(minutes=ACCESS_TOKEN_EXPIRE_MINUTES)
    to_encode.update({"exp": expire})

    encoded_jwt = jwt.encode(to_encode, SECRET_KEY, algorithm=ALGORITHM)

    return encoded_jwt

def verify_access_token(token: str, credential_exception):
    try:
        payload = jwt.decode(token, SECRET_KEY, algorithms=[ALGORITHM])
        id: str = payload.get("userid")
        if id is None:
            raise credential_exception
        token_data = schemas.TokenData(id= id)
    except JWTError:
        raise credential_exception
    
    return token_data

def get_current_user(token: str = Depends(oauth2_scheme), db:Session = Depends(database.get_db)):
    credential_exception = HTTPException(status_code= status.HTTP_401_UNAUTHORIZED, detail="Couldn't validate credentials", headers={"WWW-Authenticate": "Bearer"})

    token =  verify_access_token(token, credential_exception)
    user = db.query(models.Users).filter(models.Users.id == token.id).first()

    return user