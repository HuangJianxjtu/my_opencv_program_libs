#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    VideoCapture cap(0);
    Mat frame;
    while(1)
   {
    cap>>frame;
    imshow("frame",frame);
    waitKey(20);
   }
   return 0;
}
