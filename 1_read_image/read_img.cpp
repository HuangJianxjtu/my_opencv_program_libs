#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    Mat in_image;
    in_image=imread("cat.png");
    cout<<"height="<<in_image.rows<<endl;
    cout<<"width="<<in_image.cols<<endl;
    imshow("the image I have red:",in_image);
    waitKey(10000);

	return 0;
}
