

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat img = imread("lena.jpg");
	imshow("le",img);
	waitKey(0);
    cout << "Hello World!\n";
}


