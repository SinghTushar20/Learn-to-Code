import cv2

knowledge = cv2.CascadeClassifier("haarcascade_frontalcatface.xml")

# FOR IMAGES
# img = cv2.imread("cat5.jpg")

# img_grayscale = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# face_coordinates = knowledge.detectMultiScale(img_grayscale)

# for x, y, w, h in face_coordinates:
#     cv2.rectangle(img, (x, y), (x+w, y+h), (255, 0, 0), 2)

# cv2.imshow("CAT DETECTOR", img)
# cv2.waitKey()


# FOR VIDEOS
video = cv2.VideoCapture(0)

while(1):
    frame_status, frame = video.read()

    frame_grayscale = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    face_coordinates = knowledge.detectMultiScale(frame_grayscale)

    for x, y, w, h in face_coordinates:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (255, 0, 0), 2)

    cv2.imshow("CAT DETECTOR", frame)
    key = cv2.waitKey(1)

    if(key == 27):
        break

video.release()
