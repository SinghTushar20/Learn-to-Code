# How detection work
# S-1: Give the computer a bunch of data to learn from
# S-2: Import the image/video you wanna test computer's knowledge on
# S-2: Make the image/video grayscale
# S-3: Use the computer's knowledge from data to find what you want

import cv2
from random import randrange

# NOTE: In cv2 color are not in rgb but in bgr the opposite

# Loading pre-trained data on frontal faces (Harr cascade algorithm)
# Cascade refers to harr cascade algo and classifier is just the detector so face data is the detector using cascade algo to detect frontal faces based on the data present in the xml file
face_data = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')


# NOTE: DETECTING FACES IN A IMAGE
# # Reading the image from our device (reading image from opencv)
# img =  cv2.imread('face3.jpg')

# # Converting the image to grayscale as haar cascade algo is easy with grayscale data
# img_grayscale = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# # System is asked to try to find the img_grayscale from our sample data and if found return the list of coordinates of the rectangles
# face_coordinates = face_data.detectMultiScale(img_grayscale)

# print(face_coordinates)

# # Drawing the rectangle on the predicted face
# for face_coordinate in face_coordinates:
#     x, y, w, h = face_coordinate  # Destructuring
#     cv2.rectangle(img, (x, y), (x+w, y+h), (randrange(256), randrange(256), randrange(256)), 2)

# # cv2.rectangle(img, (42, 45), (42+154, 45+154), (0, 255, 0), 2)

# # Showing the stored image in a new window
# cv2.imshow("The window name", img)

# # Wait untill a key is pressed (pause so that the window doesn't close in a sec.)
# cv2.waitKey()
# NOTE: Wait key is important for the window to appear.


# NOTE: DETECTING FACE IN A VIDEO(SEQUENCE OF IMAGES) 
# start a webcam, WE CAN ALSO PASS VIDEO PATH AS AN ARGUMENT TO THIS FUNCTION TO DETECT FACES IN LOCAL VIDEOS
webcam = cv2.VideoCapture(0)

# Iterate through every frame of the video (each frame is an image)
while True:
    # Getting image from each frame
    frame_status, frame = webcam.read()
    # Converting each frame to grayscale
    grayscaled_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    # Getting rectangle corordinate around faces from the frame based on the data we are given
    face_coordinates = face_data.detectMultiScale(grayscaled_frame)
    # Drawing the rectangle around face from the coordinates we get
    for face_coordinate in face_coordinates:
        x, y, w, h = face_coordinate
        cv2.rectangle(frame, (x, y), (x+w, y+h), (randrange(255), randrange(255), randrange(255)), 2)

    # Showing the frame with reactangle drawn
    cv2.imshow('WebCam', frame)

    # Capturing the key
    key = cv2.waitKey(1)

    # The close button
    if(key==27):
        break

# Clearing the webcam object
webcam.release()