import cv2 as cv
import mediapipe as mp
import time
from mediapipe.python.solutions.drawing_styles import _HAND_LANDMARK_STYLE

from mediapipe.python.solutions.hands import HandLandmark

webcam = cv.VideoCapture(0)

mpHand = mp.solutions.hands
hands = mpHand.Hands()   

mpDraw = mp.solutions.drawing_utils

# lst = []

while webcam.isOpened():
    frame_status, frame = webcam.read()

    handSearch = hands.process(frame).multi_hand_landmarks

    if handSearch:
        for hand in handSearch:
            for idx, lm in enumerate(hand.landmark):
                h, w, c = frame.shape
                cx, cy = int(lm.x * w), int(lm.y * h)
                print(idx, cx, cy)
                # if idx == 8:
                #     lst.append((cx, cy))
            mpDraw.draw_landmarks(frame, hand, mpHand.HAND_CONNECTIONS)

    # for cord in lst:
    #     cv.circle(frame, cord, 5, (255, 0, 255), -1)
    
    cv.imshow("Camera", frame)
    if cv.waitKey(1) & 0xFF == 27:
        break

webcam.release()
cv.destroyAllWindows()