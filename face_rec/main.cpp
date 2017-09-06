#include<opencv2/opencv.hpp>
#include<stdio.h>
#include"registration.h"
#include"train.h"
#include"face_recognise.h"

using namespace std;
using namespace cv;

int main()
{
	int key = 0;
	while (1)
	{
		printf("Ñ¡Ôñchoose:\n\t1. registration\n\t2. training\n\t3. recognization\n");
		scanf_s("%d", &key);
		switch (key)
		{
		case 1:
			registration();
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
