#include <opencv2/opencv.hpp>
using namespace cv;

int main() {
	Mat img = imread("C:\\Users\\Tong\\Desktop\\0611����\\figures\\1.jpg");    //������ѡһ���Լ�������ڵ�ͼƬ��·��
	imshow("���п�", img);    //��һ�����ڣ���ʾͼƬ
	waitKey(0);    //�ڼ��������ַ�ǰ�����ڵȴ�״̬
	//add
	destroyAllWindows();    //�ر����д���
	return 0;
}