from jose import JWTError, jwt
from datetime import datetime, timedelta

SECRET_KEY = "afba2d9b9504d7facc0ea70e0f5adda220ce9dfd64c316fd6c38fb59f9e5c699"
ALGORITHM = "HS256"
ACCESS_TOKEN_EXPIRE_MINUTES = 30

def create_access_token(data: dict):
    to_encode = data.copy()

    expire = datetime.now() + timedelta(minutes=ACCESS_TOKEN_EXPIRE_MINUTES)
    to_encode.update({"exp": expire})

    encoded_jwt = jwt.encode(to_encode, SECRET_KEY, algorithm=ALGORITHM)

    return encoded_jwt
