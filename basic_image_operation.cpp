#include<iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;





int main(){

    cv::Mat image = cv::imread("./amg_4_door.jpg");
 
    String windowName ="AMG_4_Door";
    namedWindow(windowName);
    cv::imshow(windowName, image);
    waitKey(0);
    destroyWindow(windowName);

	return 0;
}
