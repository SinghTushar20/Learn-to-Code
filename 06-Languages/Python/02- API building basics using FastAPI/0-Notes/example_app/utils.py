from passlib.context import CryptContext

# Selecting bcrpyt hashing algorithm
pass_crypt = CryptContext(schemes=["bcrypt"], deprecated="auto")
def hashPass(password: str):
    return pass_crypt.hash(password)

def verifyPass(password: str, hashedPass: str):
    return pass_crypt.verify(password, hashedPass)