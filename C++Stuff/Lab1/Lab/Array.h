#pragma once
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
	Array();//
	Array(int);//
	~Array();//
	int getSizeOfFile();//
	void insertData();//
	void setSize(int);//
	int SizeOfArray();//
	int Search(A);//
	void replace(A, int);
	void Duplicate();//
	void sort();
	void writeToFile();
};