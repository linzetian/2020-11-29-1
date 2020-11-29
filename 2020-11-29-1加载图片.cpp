#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
    Mat src = imread("F:/image/test.png");//imread读取图片信息//括号内容为图片地址
    imshow("input",src);
    waitKey(0);//防止闪退
    destroyAllWindows();//删除窗口的
    return 0;
}