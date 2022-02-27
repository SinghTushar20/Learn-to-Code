from fastapi import FastAPI


app = FastAPI();

app.include_router(movie.router)
app.include_router(user.router)

@app.get("/")
def root(db: Session = Depends(get_db)):
    return {"Status": f"{db}"}