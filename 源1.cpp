#include <opencv2/opencv.hpp>
using namespace cv;

int main() {
	Mat img = imread("C:\Users\Wangzicun\Pictures\165E0FF5894FF965579BC8EC94A61280.jpg");    //引号内选一张自己计算机内的图片的路径
	imshow("165E0FF5894FF965579BC8EC94A61280", img);    //打开一个窗口，显示图片
	waitKey(0);    //在键盘敲入字符前程序处于等待状态
	destroyAllWindows();    //关闭所有窗口
	return 0;
}