#pylint:disable=no-member
import cv2 as cv

# Reading the image
img = cv.imread('../Resources/Photos/cats.jpg')
# img is basically an array of pixels
# Showing the image in a new window
cv.imshow('Cats', img)
# Wait for the user to press a key
cv.waitKey(0)


# Reading Videos
capture = cv.VideoCapture('../Resources/Videos/dog.mp4')
# Going through each frame of video and then displaying it fast so it look like a video is displayed
while True:
    frame_status, frame = capture.read()

    # This is the preferred way - if `frame_status` is false (the frame could not be read, or we're at the end of the video), we immediately break from the loop. 
    if frame_status:    
        cv.imshow('Video', frame)
        if cv.waitKey(20) & 0xFF==ord('d'):
            break            
    else:
        break
capture.release()
cv.destroyAllWindows()