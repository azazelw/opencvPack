
#include <opencv2/opencv.hpp>
using namespace cv;

int main() {
	Mat img = imread("C:\\Users\\Wangzicun\\Desktop\\1.jpg");    //������ѡһ���Լ�������ڵ�ͼƬ��·�� 
	imshow("1", img);    //��һ�����ڣ���ʾͼƬ
	waitKey(0);    //�ڼ��������ַ�ǰ�����ڵȴ�״̬
	destroyAllWindows();    //�ر����д���
	return 0;
}