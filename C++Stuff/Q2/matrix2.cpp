/*
 * matrix2.cpp
 *
 *  Created on: 25-May-2022
 *      Author: Ibz
 */

#include"matrix.h"
using namespace std;

Matrix::Matrix()
{
	dim1=0;
	dim2=0;
	ptr=NULL;
}
Matrix::~Matrix()
{
	delete[] ptr;
}
Matrix::Matrix(int r, int c)
{
	dim1=r;
	dim2 = c;
	ptr= new int*[dim1];
	for(int i=0;dim1; i++)
		ptr[i]=new int[dim2];
	for(int i=0;i<dim1;i++)
	{
		for(int j=0;j<dim2;j++)
			ptr[i][j]=0;
	}
}
Matrix::Matrix(const Matrix& A)
{
	this->ptr = A.ptr;
	this->dim1=A.dim1;
	this->dim2=A.dim2;
}

Matrix& Matrix::operator =(const Matrix& o)
{
	this->ptr = o.ptr;
	this->dim1=o.dim1;
	this->dim2=o.dim2;
	return *this;
}

Matrix& Matrix::operator +(const Matrix& o)
{
	if((dim1!=o.dim1)||(dim2!=o.dim2))
	{
		cout<<"Matrices can not be added";
		return *this;
	}

	else
	{
		for(int i = 0; i<dim1; i++)
			for(int j=0; j<dim2; j++)
				ptr[i][j]= ptr[i][j] + o.ptr[i][j];
		return *this;
	}
}

Matrix& Matrix::operator -(const Matrix& o)
{
	if ((dim1 != o.dim1) || (dim2 != o.dim2))
	{
		cout<<"Matrices can not be added";
		return *this;
	}

	else
	{
		for(int i = 0; i<dim1; i++)
			for(int j=0; j<dim2; j++)
				ptr[i][j]= ptr[i][j] - o.ptr[i][j];
		return *this;
	}
}

bool Matrix::operator ==(const Matrix &o)
{
	bool status = false;
	if ((dim1 != o.dim1) || (dim2 != o.dim2))
	{
		return false;
	}

	else
	{
		for(int i=0;i<dim1;i++){
			for(int j=0;j<dim2;j++)
			{
				if(ptr[i][j]!=o.ptr[i][j])
				{
					return status;
				}
			}
		}
		return true;
	}
}

Matrix& Matrix::operator +=(int a)
{
	for(int i=0;i<dim1;i++)
		for(int j=0;j<dim2;j++)
			ptr[i][j]=ptr[i][j]+a;
	return *this;
}

Matrix& Matrix::operator -=(int a)
{
	for(int i=0;i<dim1;i++)
		for(int j=0;j<dim2;j++)
			ptr[i][j]=ptr[i][j]-a;
	return *this;
}

Matrix& Matrix::operator *=(int a)
{
	for(int i=0;i<dim1;i++)
		for(int j=0;j<dim2;j++)
			ptr[i][j]=ptr[i][j]*a;
	return *this;
}

Matrix& Matrix::operator /=(int a)
{
	for(int i=0;i<dim1;i++)
		for(int j=0;j<dim2;j++)
			ptr[i][j]=ptr[i][j]/a;
	return *this;
}

int Matrix::getAt(int x, int y)
{
	if((x>=0 && x<dim1) && (y>=0 && y<dim2))
	{
		for(int i=0;i<dim1;i++)
			for(int j=0;j<dim2;j++)
			{
				if(i==x && j==y)
				{
					return ptr[i][j];
				}
			}
	}
		cout<<"Incorrect params";
		return -1111111111;
}

int Matrix::fetch1()
{
	return dim1;
}

int Matrix::fetch2()
{
	return dim2;
}

ostream& operator<<(ostream& out , const Matrix & o)
{

    for (int i =0; i < o.row; i++)
    {
        for (int j =0; j < o.col; j ++)
        {
            out << o.add[i][j];
        }
    }
}
istream& operator>>(istream& in , const Matrix & o)
{

    for (int i =0; i < o.row; i++)
    {
        for (int j =0; j < o.col; j ++)
        {
            in >> o.add[i][j];
        }
    }
}
