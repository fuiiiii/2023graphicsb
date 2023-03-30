///檔名一定要.cpp
#include <opencv/highgui.h>
int main()
{
    IplImage * img = cvLoadImage("image.jpg"); ///圖檔要放桌面
    cvShowImage("Week07",img);
    cvWaitKey(0);
}
