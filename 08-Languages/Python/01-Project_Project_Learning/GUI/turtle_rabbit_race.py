import tkinter as tk
import random
class Turtle_Rabbit_Race:
    def __init__(self):
        self.window = tk.Tk()
        self.canvas = tk.Canvas(master=self.window, width = 1400, height = 400, bg = 'light green')
        self.canvas.create_line(50,50, 50,350, fill = 'green')
        self.canvas.create_line(1350, 50, 1350, 350, fill='red')

        #load the image from disk (png only)
        im_turtle = tk.PhotoImage(file = 'd:/images/turtle.png')
        im_rabbit = tk.PhotoImage(file='d:/images/rabbit.png')

        #variables
        self.turtle_coords = [25,200]
        self.rabbit_coords = [25,300]
        self.finish_x = 1350
        self.number_of_boosters = 2
        self.race_ends= False

        #render it on canvas
        self.turtle = self.canvas.create_image(self.turtle_coords, image = im_turtle)
        self.rabbit = self.canvas.create_image(self.rabbit_coords, image=im_rabbit)

        #size and pos the canvas into the window
        self.canvas.pack(expand=True, fill=tk.BOTH)

        #bind key event
        self.window.bind('<Right>', self.move_right)
        self.window.bind('<Control-Right>', self.booster_use)
        self.window.after(30, self.rabbit_moves)
        self.window.mainloop()

    def check_race_ends(self):
        if self.rabbit_coords[0] > self.finish_x:
            print('Race ends with Rabbit as winner')
            self.race_ends = True
            self.window.unbind('<Right>')
            self.window.unbind('<Control-Right>')

        elif self.turtle_coords[0] > self.finish_x:
            print('Race ends with Turtle as winner')
            self.race_ends = True
            self.window.unbind('<Right>')
            self.window.unbind('<Control-Right>')

    def rabbit_moves(self):
        self.rabbit_coords[0] += random.randint(1,10)
        self.canvas.coords(self.rabbit, self.rabbit_coords)
        self.check_race_ends()
        if not self.race_ends:
            self.window.after(30, self.rabbit_moves)

    def move_right(self, event):
        self.turtle_coords[0]+=5
        self.canvas.coords(self.turtle, self.turtle_coords)
        self.check_race_ends()

    def booster_use(self, event):
        if self.number_of_boosters >0:
            jump = 35
            self.number_of_boosters -= 1
        else:
            jump = 5
            
        self.turtle_coords[0] += jump
        self.canvas.coords(self.turtle, self.turtle_coords)
        self.check_race_ends()

Turtle_Rabbit_Race()