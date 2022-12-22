#include<iostream>
#include<fstream>
using namespace std;
int removeDup(int* dt, int x)
{
	if (x == 0 || x == 1)
		return x;
	int* buff = new int[x];
	int i = 0, j = 0;
	while (i < x - 1)
	{
		if (dt[i] != dt[i + 1])
			buff[j++] = dt[i];
		i++;
	}
	buff[j++] = dt[x - 1];

	for (i = 0; i < j; i++)
	{
		dt[i] = dt[i];

	}
	delete buff;
	return j;
}
template <class A>
class Array
{
	A* data;
	A** newArray;
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
		Textfile.open("Numbers.txt");
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
			File.open("Numbers.txt", ios::in);
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
		Textfile.open("Numbers.txt");
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
	void Duplicate()
	{
		removeDup(data, size);
	}
	void sort()
	{
		int tem;
		for (int i = 0; i < size; i++)
		{
			for (int j = i = 1; j < size; j++)
			{
				tem = data[i];
				data[i] = data[j];
				data[j] = tem;
			}
		}
	}
	bool isEmpty()
	{
		if (!(data[0] || data[1]))
			return true;
		else
			return false;
	}
	void write()
	{
		ofstream TextFile("CleanNumbers.txt");
		for (int i = 0; i < size; i++)
		{
			TextFile << data[i];
		}
		TextFile.close();
	}
	void array_2D()
	{
		*newArray = new A*[2];
		for (int i = 0; i < 2; i++)
		{
			newArray[i] = new int[int(size / 2) + 1];
		}
	}
	void deallocateMemory()
	{
		delete data;
		delete newArray;
	}
};

//template<class f>
int main()
{
	Array<int> x;
	x.insertData();
	x.Duplicate();
	x.sort();
	x.write();
	x.deallocateMemory();

}

