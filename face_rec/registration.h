#ifndef TAKE_PHOTO_H
#define TAKE_PHOTO_H

#endif // TAKE_PHOTO_H

#include<opencv2/opencv.hpp>
#include <direct.h>

using namespace std;
using namespace cv;

int  registration()
{
	CascadeClassifier cascade;
	cascade.load("lbpcascade_frontalface.xml");
	VideoCapture cap;
	cap.open(0);
	Mat frame;
	int pic_num = 1;

	string username, userid, userdir;
	cout << "please write down your name:" << endl;
	cin >> username; //用户姓名
	cout << "please write down your id:" << endl;
	cin >> userid; //用户id

	userdir = "photo\\" + userid;  //用户路径

	_mkdir(userdir.c_str());  //创建该用户图片文件夹


							  //以下计划存入数据库，格式：用户id；用户姓名；用户图片路径
	ofstream DBfile("DataBase.txt", ios::app);
	if (!DBfile) {
		cout << "Open the file failure...\n";
		exit(0);
	}
	DBfile << userid << ";" << username << ";" << userdir << ";" << endl;
	DBfile.close();

	//以下为csv标签文件，格式：路径；标签；
	ofstream tagfile("at.txt", ios::app);
	if (!tagfile) {
		cout << "Open the file failure...\n";
		exit(0);
	}
	for (int i = 1;i <= 20;i++)
	{
		tagfile << userdir << "\\pic" << i << ".jpg" << ";" << userid << ";" << endl;
	}
	tagfile.close();

	while (1)
	{
		cap >> frame;

		std::vector<Rect> faces;
		Mat frame_gray;
		cvtColor(frame, frame_gray, COLOR_BGR2GRAY);

		cascade.detectMultiScale(frame_gray, faces, 1.1, 4, 0, Size(100, 100), Size(500, 500));

		for (size_t i = 0; i < faces.size(); i++)
		{
			rectangle(frame, faces[i], Scalar(255, 0, 0), 2, 8, 0);
		}

		if (faces.size() == 1)
		{
			Mat faceROI = frame_gray(faces[0]);
			Mat myFace;
			resize(faceROI, myFace, Size(92, 112));
			putText(frame, to_string(pic_num), faces[0].tl(), 3, 1.2, (0, 0, 255), 2, LINE_AA);

			string filename = format("photo\\%d\\pic%d.jpg", atoi(userid.c_str()), pic_num);
			imwrite(filename, myFace);
			imshow(filename, myFace);
			waitKey(500);
			destroyWindow(filename);
			pic_num++;
			if (pic_num == 21) break;
		}
		imshow("frame", frame);
		waitKey(100);
	}

	destroyWindow("frame");

	cout << " registration success！" << endl;

	return 0;
}
