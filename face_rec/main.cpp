#include<opencv2/opencv.hpp>
#include<stdio.h>
#include<take_photo.h>
#include<train.h>
#include<face_recognise.h>

using namespace std;
using namespace cv;

int main()
{
    int key = 0;
    while(1)
    {
        printf("选择choose:\n\t1. take photos\n\t2. train\n\t3. recognise\n");
        scanf("%d", &key);
        switch(key)
        {
            case 1:
                take_photo();
                break;

            case 2:
                train();
                break;

            case 3:
                face_recognise();
                break;

            default:
                break;
        }
    }

    return 0;
}
