#include"Array.h"
#include"Queue.h"
#include"Stack.h"
#include"LinkedList.h"
#include<iomanip>
#include<fstream>
#include<cstring>
#include<cstdlib> //Only for Clear Screen

LinkedList RLC(int height, int width, Picture P, LinkedList Li)
{
	int temp = 0;
	int counter = 0;
	for (int i = 0; i < width; i++)
	{
		counter = i;
		if (P.getPixel(height, i) == 255) {
			Li.insertNode(i);
		}
	}
	Li.insertNode(-1);
	return Li;
}
//void Write_List_To_File(int width, LinkedList Li)
//{
//	ifstream fin;
//	ofstream fout;
//
//	fin.open("RLCLIST.txt");
//	fout.open("RLCLIST.txt", ios::app);
//
//	if (fin.is_open()) {
//		while(!Li.isEmpty())
//			fout << Li.popHead();
//		fout << endl;
//	}
//	fin.close();
//	fout.close();
//}
#define _CRT_SECURE_NO_WARNINGS //trying to resolve a time error
int main()
{
	/*auto t = std::time(nullptr);
	auto tm = *std::localtime_s(&t);*/
	//put_time(&tm, "%d-%m-%Y %H-%M-%S");
	struct tm newtime;
	time_t t = time(NULL);
	localtime_s(&newtime, &t);
	string log = "Log" + localtime_s(&newtime, &t);
	ofstream logFile;
	logFile.open(log);

	logFile << "Log file started at process time: " << localtime_s(&newtime, &t) << endl;
	//prompt
PROMPT:
	string path = "apple-18.pgm", input = " ";
	cout << "Enter File name (for testing use apple-18.pgm):  " << endl;
	cin >> path;
	try
	{
		ifstream file(path);
		if (file)
		{
			cout << "File found..." << endl;
			file.close();
		}
		else
			throw(path);
	}
	catch (string Incorrectpath)
	{
		cout << "Incorrect File Name" << endl;
		goto PROMPT;
	}
	int height, length = 0;
	ifstream file;
	file.open(path);
	cout << "Reading File..." << endl;
	for (int i = 0; i < 7; i++) {

		file >> input;
		if (i == 7 - 1)
		{
			length = stoi(input);//stoo -> string to integer func
		}
		else if (i == 7 - 2)//      ^
		{
			height = stoi(input);
		}
	} //reading file for dimensions
	file.close();

	logFile << "Piucture made at time: " << localtime_s(&newtime, &t) << endl;
	Picture pic(length, height);
	pic.Read(path);

	//Everything above is for  implementation of the questoins.
	//The file to be manipulated will be asked for first, then we will extract size
	//Read it and retrurn as the opject "pic"

	int QuestionNumber = 0;
	char QuestionPart = ' ';
LABEL:
	logFile << "terminal started at: " << localtime_s(&newtime, &t) << endl;
	system("CLS");
	cout << "Welcome to 21i_1679's AKA Ibrahim Akhtars(Mine) Implementatino of Assignment Module 1" << endl;
	cout << "1: Statistics of the Image.\n2: Component Extraction from Queue.\n3: Component Extraction from Stack.\n"
		<< "4 RLC stuff\n5\n6\n" << endl;
	cout << "Enter the question number you wish to view (1-6): Please only enter integer values" << endl;
	cin >> QuestionNumber;
	try
	{
		if (QuestionNumber <= 6 && QuestionNumber > 0)
		{
			goto Switch_Case;
		}
		else
			throw(QuestionNumber);
	}
	catch (int IncorrectQuestionNumber)
	{
		cout << "Incorrect Question Number" << endl;
		goto PROMPT;
	}
Switch_Case:
	switch (QuestionNumber)
	{
		//Question 1
		//done
	case 1:
	{

		logFile << "Question 1: " << localtime_s(&newtime, &t) << endl;
		cout << "a) Mean pixel value by adding all the pixel values and dividing it by the no. of pixels\n"
			<< "b) The number of blackand no.of white pixels.\n"
			<< "c) The average no.of black pixels in each row.\n"
			<< "d) Convert image to its negative thru the image class method." << endl;
		cout << "Enter option (a,b,c,d): " << endl;
		cin >> QuestionPart;
		switch (QuestionPart)
		{
		case 'A':
		{

		}
		case 'a':
		{

			logFile << "Question1 part a: " << localtime_s(&newtime, &t) << endl;
			cout << pic.mean();
			break;
		}
		case 'B':
		{

		}
		case 'b':
		{

			logFile << "Question1 part b: " << localtime_s(&newtime, &t) << endl;
			cout << "No. of Balck Pixels: " << pic.noBlackPixels() << endl;
			cout << "No. of WHite Pixels: " << pic.noWhitePixels() << endl;
			break;
		}
		case 'C':
		{

		}
		case 'c':
		{

			logFile << "Question1 part c: " << localtime_s(&newtime, &t) << endl;
			int* Average = pic.RowAverage();
			for (int i = 0; i < height; i++)
				cout << Average[i] << endl;
			break;
		}
		case 'D':
		{

		}
		case 'd':
		{
			logFile << "Question1 part d: " << localtime_s(&newtime, &t) << endl;
			Picture* NegativePic = pic.ConvertToNegative();
			cout << "Object of type ptr->Picture named NegativePic has been made containing the Negative of " << path << " ." << endl;
			break;
		}
		default:
		{

			logFile << "Incorrect option entered: " << localtime_s(&newtime, &t) << endl;
			cout << "Incorrect option number: " << endl;
			goto LABEL;
		}
		}

	}
	goto LABEL;
	//Question 2
	//not done
	case 2:
	{;
	logFile << "Question2: " << localtime_s(&newtime, &t) << endl;
	cout << "Main Implementation of this code is currently in development\n"
		<< "However Queue.cpp and Queue.h is in the code as of now and functional"
		<< "The entire image can be found enqueued in the queue named 'q'"
		<< "NOTE: IT IS NOW DONE." << endl;
	break;
	}
	goto LABEL;
	//Question 3
	//not done
	case 3:
	{
		logFile << "Question3: " << localtime_s(&newtime, &t) << endl;
		cout << "Main Implementation of this code is currently in development\n"
			<< "However Stack.cpp and Queue.h is in the code as of now and functional"
			<< "The entire image can be found pushed in the stack named 's'"
			<< "NOTE: IT IS NOW DONE." << endl;
		break;
	}
	goto LABEL;
	//Question 4
	//done
	case 4:
	{
		logFile << "Question4: " << localtime_s(&newtime, &t) << endl;
		logFile << "RLC performed: " << localtime_s(&newtime, &t) << endl;
		cout << "RLC on the image." << endl;
		LinkedList* list = new LinkedList[height + 1];
		list[0].insertNode(height);
		list[0].insertNode(length);
		list[0].printList();
		//RLC STUff
		for (int i = 1; i < height; i++) {
			list[i] = RLC(i, length, pic, list[i]);
			cout << endl;
		}
		//List has been made
		//void Write_List_To_File(int width, LinkedList Li, fstream file)
		logFile << "List written to Disk: " << localtime_s(&newtime, &t) << endl;
		fstream file("RLCLIST.txt");
		file.close();
		for (int i = 0; i <= length; i++)
		{
			list[i].WriteListToFile("RLCLIST.txt");
			cout << " List " << i << " written successfully" << endl;
		}
		logFile << "Black Pixels Calcualted: " << localtime_s(&newtime, &t) << endl;
		int totalBlack = 0;
		for (int i = 0; i <= length; i++) {
			totalBlack += list[i].noBlack();
		}
		cout << "Total number of black pixels in selected image are: " << totalBlack << endl;

		logFile << "Image from RLC written to Disk: " << localtime_s(&newtime, &t) << endl;
		for (int i = 1; i < length; i++)
			list[i].backToImage(length);

		logFile << "Negative of Image: " << localtime_s(&newtime, &t) << endl;
		for (int i = 1; i < length; i++)
			list[i].toNegative(length);
		break;
	}
	goto LABEL;
	//Question 5
	//not done
	case 5:
	{
		logFile << "Question5: " << localtime_s(&newtime, &t) << endl;
		cout << "Main Implementation of this code is currently in development\n" << endl;
		break;
	}
	goto LABEL;
	//Question 6
	//not done
	case 6:
	{

		logFile << "Question6: " << localtime_s(&newtime, &t) << endl;
		cout << "Main Implementation of this code is currently in development\n" << endl;
		break;
	}
	goto LABEL;
	//Question Number Incorrect
	default:
	{

		logFile << "Incorrect question number: " << localtime_s(&newtime, &t) << endl;
		cout << "Kindly enter a valid question number." << endl;
		goto LABEL;
	}
	goto LABEL;
	}
}

