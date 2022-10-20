#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void read_number_file(string filename, int number)
{
	string number1;
	ifstream myfile(filename);
	if (myfile.is_open())
	{
		while (getline(myfile, number1))
			cout << number1 << endl;
		myfile.close();
	}
	else
		cout << "unable to open file";
}

void read_string_file(string filename, string text)
{
	ifstream myfile2(filename);
	if (myfile2.is_open())
	{
		while (getline(myfile2, text))
			cout << text << endl;
		myfile2.close();
	}
	else
		cout << "unable to open file";
}

int main()
{
	string textfile = "String.txt";
	string numfile = "Numbers.txt";
	int a=0;
	string text;
	int x;
	read_number_file(numfile, a);
	cout << "Press one to continue";
	cin >> x;
	if (x != 1)
		return 0;
	else
		read_string_file(textfile, text);
}
