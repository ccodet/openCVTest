#include <opencv2/opencv.hpp>
using namespace cv;

int main() {
	Mat img = imread("C:\\Users\\Tong\\Desktop\\0611车仝\\figures\\1.jpg");    //引号内选一张自己计算机内的图片的路径
	imshow("银行卡", img);    //打开一个窗口，显示图片
	waitKey(0);    //在键盘敲入字符前程序处于等待状态
	//add
	destroyAllWindows();    //关闭所有窗口
	return 0;
}