#Countdown Calendar
#Feature engineering, GUI
from datetime import datetime
import tkinter as tk

def render(event_list):
    #create a stand alone window
    window = tk.Tk()
    
    #Create a Canvas
    #Canvas is  a widget that is used for:
    #drawing and it can hold other widgets as well.
    #Using canvas, 2D objects can be created like text, circle, rectangle, etc.
    #In canvas, x & y coordinates have 0 value at the top left corner.
    #Moving to the right increases x value and Moving to the left increases y value.
    canvas = tk.Canvas(master=window, bg = 'black', width = 800, height = 600)

    #write title
    canvas.create_text(400, 50, anchor = 'center', font = 'Arial 28 bold underline', fill = 'orange', text='Important Events')
    #write events
    y = 150
    for ev in event_list:
        #20: horizontal offset wrt anchor
        #y: vertical offset
        #anchor: reference point (w: west- left of string; center: center- center of string; e: east- right of string, ...)
        canvas.create_text(20, y, anchor = 'w', font = 'Arial 20', fill = 'light blue', text = chr(128073)+ ' ' + ev[0] + ' in ' + ev[1])
        y+=50
    #pack the canvas
    canvas.pack(fill = tk.BOTH, expand = True)
    #render and remain alive
    window.mainloop()

def load_events(event_file):
    #open the file for reading
    file_handle = open(event_file, 'r')
    #event list
    event_list = []
    #read the file (line by line)
    for x in file_handle:
        x = x.strip() #remove leading and trailing spaces, newlines
        temp = x.split(',')
        #parse the string to form a datetime object
        event_date = datetime.strptime(temp[1], '%d/%m/%y')
        #subtract two datetime objects to fetch the day's in between
        days_between = str(event_date - datetime.today()).split(',')[0]
        event_list.append((temp[0], days_between))

    #close the file
    file_handle.close()
    return event_list

def main():
    event_list = load_events('d:/temp/events.txt')
    render(event_list)

main()