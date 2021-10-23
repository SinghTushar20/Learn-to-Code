import cv2

## Creating car classifier/detector and pedestrian classifier/detector
## DATA for our computer to learn from
car_classifier = cv2.CascadeClassifier('haarcascade_cars.xml')
pedestrian_classifier = cv2.CascadeClassifier('haarcascade_people.xml')

## Detection in Image
# img = cv2.imread("car1.jpg")
# img_grayscale = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

## Detecting cars from images
# cars = car_classifier.detectMultiScale(img_grayscale)

## Creating rectangles around the detected objects
# for (x, y, w, h) in cars:
#     cv2.rectangle(img, (x, y), (x+w, y+h), (0, 0, 255), 2)

## Displaying the result
# cv2.imshow("CAR VIEW", img)
# cv2.waitKey()


# Detection in Video
car_cam = cv2.VideoCapture(0)

#detecting cars from video
while True:
    frame_status, frame = car_cam.read()
    frame_grayscale = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    cars = car_classifier.detectMultiScale(frame_grayscale)
    pedestrians = pedestrian_classifier.detectMultiScale(frame_grayscale)

    #drawing rectangles around cars
    for (x, y, w, h) in cars:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)
    #drawing rectangles around pedestrians
    for (x, y, w, h) in pedestrians:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 0, 255), 2)

    cv2.imshow('CAR CAM', frame)
    key = cv2.waitKey(1)

    if(key==27):
        break

car_cam.release()