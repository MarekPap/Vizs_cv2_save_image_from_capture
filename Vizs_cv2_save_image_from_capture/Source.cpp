#include <opencv2/core.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
#include <iostream>
#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <opencv2\imgcodecs.hpp>
#include <opencv2\highgui.hpp>
#include <opencv2\imgproc.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\highgui\highgui.hpp>

using namespace cv;
using namespace std;
int main(void) {


	Mat image;  //create matris to store image
	VideoCapture cap;  	//initialize capture
	cap.open(0);

	namedWindow("window", 1);  //create window to show image

	int i = 0;
	while (1) {
		cap >> image;    //copy webcam stream to image
		imshow("window", image);   //print image to screen

		imwrite(format("d://photoOPENCV//%d.bmp", i), image);  // ulozenie obrazku
		waitKey(50);
		i++;

		if (waitKey(30) == 27) //wait for 'esc' key press for 30ms. If 'esc' key is pressed, break loop
		{
			cout << "esc key is pressed by user" << endl;
			break;
		}
	}
}