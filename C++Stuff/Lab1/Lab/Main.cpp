#include<iostream>
#include"Array.h"
#include<fstream>

using namespace std;

template< typename Z>
int main()
{
	Array<Z> x;
	cout<<x.getSizeOfFile();
}