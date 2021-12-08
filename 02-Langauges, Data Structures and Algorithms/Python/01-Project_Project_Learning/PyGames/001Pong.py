# Turtle
import turtle

window = turtle.Screen() 
window.title("Pong Game")   # Title at the top bar of app
window.bgcolor("black")
window.setup(width = 800, height = 600)  # Dimensions of the game screen
window.tracer(0)  # To stop windows from updating

# Center is (0,0)  
# Corners are (-400,400), (400,400), (400,-400), (-400,-400)

# Bat 1
bat1 = turtle.Turtle()
bat1.speed(0)  # Animation speed or fps kinda stuffs
bat1.shape("square")
bat1.color("white")
bat1.shapesize(stretch_wid=5, stretch_len=1)
bat1.penup()
bat1.goto(-350,0)

# Moving functions for bat 1
def bat1_up():
    y = bat1.ycor()
    y += 20
    bat1.sety(y)

def bat1_down():
    y = bat1.ycor()
    y -= 20
    bat1.sety(y)

# Keyboard binding
window.listen()
window.onkeypress(bat1_up, "w")
window.onkeypress(bat1_down, "s")

# Bat 2
bat2 = turtle.Turtle()
bat2.speed(0)  # Animation speed or fps kinda stuffs
bat2.shape("square")
bat2.color("white")
bat2.shapesize(stretch_wid=5, stretch_len=1)
bat2.penup()
bat2.goto(350,0)

# Moving functions for bat 1
def bat2_up():
    y = bat2.ycor()
    y += 20
    bat2.sety(y)

def bat2_down():
    y = bat2.ycor()
    y -= 20
    bat2.sety(y)

# Keyboard binding
window.listen()
window.onkeypress(bat2_up, "Up")
window.onkeypress(bat2_down, "Down")



# Ball
ball = turtle.Turtle()
ball.speed(0)  # Animation speed or fps kinda stuffs
ball.shape("circle")
ball.color("white")
ball.penup()
ball.goto(0,0)
ball.dx = 0.4
ball.dy = 0.4

scoreA = 0
scoreB = 0

# Pen
pen = turtle.Turtle()
pen.speed(0)
pen.color("white")
pen.penup()
pen.hideturtle()
pen.goto(0, 260)
pen.write(f"Player A: {scoreA}\nPlayer B: {scoreB}", align="center", font=("Arial", 12, "normal"))

# Main game loop
while True:
    window.update()

    # Moving the ball
    ball.setx(ball.xcor() + ball.dx)
    ball.sety(ball.ycor() + ball.dy)
    if ball.ycor() > 290 :
        ball.sety(290)
        ball.dy *= -1
    
    if ball.ycor() < -290 :
        ball.sety(-290)
        ball.dy *= -1

    if ball.xcor() > 390 :
        ball.goto(0, 0)
        ball.dx *= -1
        scoreA += 1
        pen.clear()
        pen.write(f"Player A: {scoreA}\nPlayer B: {scoreB}", align="center", font=("Arial", 12, "normal"))

    
    if ball.xcor() < -390 :
        ball.goto(0, 0)
        ball.dx *= -1
        scoreB += 1
        pen.clear()
        pen.write(f"Player A: {scoreA}\nPlayer B: {scoreB}", align="center", font=("Arial", 12, "normal"))


    # Bat and ball collision
    if ball.xcor() > 340 and ball.xcor() < 350 and (ball.ycor() < bat2.ycor() + 40 and ball.ycor() > bat2.ycor() - 40 ) :
        ball.setx(340)
        ball.dx *= -1

    if ball.xcor() > -350 and ball.xcor() < -340 and (ball.ycor() < bat1.ycor() + 40 and ball.ycor() > bat1.ycor() - 40 ) :
        ball.setx(-340)
        ball.dx *= -1