#include <opencv2/opencv.hpp>
using namespace cv;

int main() {
	Mat img = imread("C:\Users\Wangzicun\Pictures\165E0FF5894FF965579BC8EC94A61280.jpg");    //������ѡһ���Լ�������ڵ�ͼƬ��·��
	imshow("165E0FF5894FF965579BC8EC94A61280", img);    //��һ�����ڣ���ʾͼƬ
	waitKey(0);    //�ڼ��������ַ�ǰ�����ڵȴ�״̬
	destroyAllWindows();    //�ر����д���
	return 0;
}