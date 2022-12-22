#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
template <typename T>
void read(string filename, T text)
{
	int largest=0;
	int temp;
	long sum=0;
	ifstream myfile2(filename);
	if (myfile2.is_open())
	{
		while (!myfile2.eof())
			{
			myfile2 >> temp;
			sum += temp;
			if (temp > largest)
				largest = temp;
			}
		cout << largest << "is the largest number"<<endl;
		cout << sum << "Is the sum"; << endl;
		myfile2.close();
	}
	else
		cout << "unable to open file";
}
void read_string(string filename, string text)
{
	string buffer;
	string word;
	int length = 0;
	ifstream myfile(filename);
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			myfile >> buffer;
			int x = buffer.length();
			if (x > length)
			{
				length = x;
				word = buffer;
			}
		}
		cout << "Longest word is: " << word;
		myfile.close();
	}
	else
		cout << "unable to open file";
}
int main()
{
	string textfile = "Strings.txt";
	string numfile = "Numbers.txt";
	int a;
	string text;
	int x;
	read<string>(numfile, text);
	read_string(textfile, text);
}