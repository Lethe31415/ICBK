#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    Mat img = imread("test.jpg");
    if (img.empty()) {
        cout << "错误: 找不到 test.jpg" << endl;
        return -1;
    }
    Mat gray;
    cvtColor(img, gray, COLOR_BGR2GRAY);

    Mat edges;
    Canny(gray, edges, 50, 150);

    imwrite("test_edges.jpg", edges);
    cout << "边缘检测图片已保存为 test_edges.jpg" << endl;

    return 0;
}