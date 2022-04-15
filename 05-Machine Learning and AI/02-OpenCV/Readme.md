- A image is an array/matrix of pixels in raster graphics.

- If we say a certain image or screen size is w x h it means it has w pixels along x axis and y pixels on y axis.

  - HD is 1280x720 it means it has 1280 pixels along x axis and 720 pixels along y axis.

- The more the pixels the better the image, video(a sequence of images).

- Level of an image is the shade of black and white it support.

  - Binary image is a black and white image that has only 2 levels 0(black) and 1(white).
  - For grayscale image we use 256 lvl which mean we have 256 shades of black and white where 0(black) and 255(white). So a grayscale HD image is 1280 x 720 x 1.
  - For color image we have 3 Grayscale images presenting the intensity of Red, Green, Blue (RGB), Combining the 3 we get a colored image. So a colored HD image is 1280 x 720 x 3.

- Binary images can be achieved by thresholding.
- RGB image has 3 channels Red, Blue, Green.

- In OpenCV the origin is at the top left corner of the screen, x axis is towards right and y axis is towards down.

- As image is a matrix/array of pixels we can use slicing with them to crop an image.
  eg. croppedImg = img[0:50, 100:300] # This mean that the image take the pixels from 0 till 50 in y axis and 100 till 300 in x axis.
- In slicing the height comes first.
