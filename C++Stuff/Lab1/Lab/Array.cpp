#include "Array.h"

template <typename B>
Array<B>::Array()
{
	data = NULL;
	size = 0;
	capacity = 0;
}

template <typename B>
Array<B>::Array(int s)
{
	size = s;
	data = new B[s];
}

template <typename B>
Array<B>::~Array()
{
	delete data;
} 

//NOT DONE
template <typename B>
void Array<B>::insertData()
{
	int newSize = getSizeOfFile();
	setSize(newSize);
	delete data;
	data = new B[size];
	int i = 0;
	fstream File;
	File.open("Numbers", ios::in);
	if(File.is_open())
	{
		while (i<size)
		{
			File >> data[i];
			i++;
		}
	}
	File.close();
}

template <typename B>
int Array<B>::getSizeOfFile()
{
	int count=0;
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

template <typename B>
void Array<B>::setSize(int x)
{
	if (x > 0)
		size = x;
}

template <typename B>
int Array<B>::SizeOfArray()
{
	return size;
}

template <typename B>
int Array<B>::Search(B var)
{
	int index;
	int i = 0;
	B text;
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

template <typename B>
void Array<B>::replace(B var, int at)
{
	data[at] = var;
}
