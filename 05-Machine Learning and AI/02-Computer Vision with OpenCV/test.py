import cv2 as cv
import numpy as np
canvas = np.zeros((300, 300, 3), np.uint8)
for i in range(0,300,5):
    for j in range(0,300,5):
        if(i%2 == 0 or j%2==0):
            cv.rectangle(canvas, (i,j), (i+5,j+5), (0,0,0), -1)
        else:
            cv.rectangle(canvas, (i,j), (i+5,j+5), (0,0,255), -1)
cv.circle(canvas, (150,150), 60, (0, 255, 0), -1)
cv.imshow("Result", canvas)
cv.waitKey(0)