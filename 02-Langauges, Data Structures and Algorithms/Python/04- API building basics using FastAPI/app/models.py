from .database import Base
from sqlalchemy import Column, Integer, String, TIMESTAMP
from sqlalchemy.sql.expression import text

class Messages(Base):
    __tablename__ = "messages"

    id = Column(Integer, primary_key=True, nullable=False)
    sender = Column(String, nullable=False)
    reciver = Column(String, nullable=False)
    message = Column(String, nullable=False)
    send_time = Column(TIMESTAMP(timezone = True), nullable=False, server_default=text('now()'))

class Users(Base):
    __tablename__ = "users"

    id = Column(Integer, primary_key=True, nullable=False)
    email = Column(String, nullable=False, unique=True)
    password = Column(String, nullable=False)
    send_time = Column(TIMESTAMP(timezone = True), nullable=False, server_default=text('now()'))