#include<iostream>
#include<fstream>

using namespace std;

template <class A>
class Array
{
	A* data;
	int size;
	int capacity;
public:
	Array()
	{
		data = NULL;
		size = 0;
		capacity = 0;
	}
	Array(int s)
	{
		size = s;
		data = new A[s];
	}
	~Array()
	{
		delete data;
	}
	int getSizeOfFile()
	{
		int count = 0;
		int text;
		ifstream Textfile;
		Textfile.open("Numbers");
		if (Textfile.is_open())
		{
			while (!Textfile.eof())
			{
				Textfile >> text;
				count++;
			}
		}
		Textfile.close();
		return count;
	}
	void insertData()
	{
		{
			int newSize = getSizeOfFile();
			setSize(newSize);
			delete data;
			data = new A[size];
			int i = 0;
			fstream File;
			File.open("Numbers", ios::in);
			if (File.is_open())
			{
				while (i < size)
				{
					File >> data[i];
					i++;
				}
			}
			File.close();
		}
	}
	void setSize(int x)
	{
		if (x > 0)
			size = x;
	}
	int SizeOfArray()
	{
		return size;
	}
	int Search(A var)
	{
		int index;
		int i = 0;
		A text;
		ifstream Textfile;
		Textfile.open("Numbers");
		if (Textfile.is_open())
		{
			while (!Textfile.eof())
			{
				Textfile >> text;
				if (text == var)
					index = i;
				i++;
			}
		}
		Textfile.close();
		return i;
	}
	void replace(A var, int at)
	{
		data[at] = var;
	}
	/*
	void Duplicate()
	void sort()
	void writeToFile()
	*/
};

template<class f>
int main()
{
	Array x;
	cout<<x.getSizeOfFile();
}