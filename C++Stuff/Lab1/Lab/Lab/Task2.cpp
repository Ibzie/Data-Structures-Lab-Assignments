#include<iostream>
#include<fstream>
#include<string>
using namespace std;
template <typename T>
void read(string filename, T text)
{

	ifstream myfile2(filename);
	if (myfile2.is_open())
	{
		while (!myfile2.eof())
		{
			myfile2 >> text;
			cout << text << endl;
		}
		myfile2.close();
	}
	else
		cout << "unable to open file";
}

int main()
{
	int a=0;
	string text;
	int x;
	read<string>("Strings.txt", text);
	cout << "Press one to continue";
	cin >> x;
	if (x != 1);
	return 0;
	read<int>("Numbers.txt", a);
}