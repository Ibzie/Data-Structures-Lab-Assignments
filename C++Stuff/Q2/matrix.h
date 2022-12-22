/*
 * matrix.h
 *
 *  Created on: 22-May-2022
 *      Author: Ibz
 */

#ifndef MATRIX_H_
#define MATRIX_H_
#include<iostream>
using namespace std;


class Matrix
{
	int dim1, dim2;
	int** ptr;
public:
	int row=dim1;
	int col=dim2;
	int** add=ptr;
	Matrix();// done
	Matrix(int, int);// done
	Matrix(const Matrix&);// done
	int getAt(int, int);
	int fetch1();
	int fetch2();
	Matrix& operator = (const Matrix &);// done
	Matrix& operator + (const Matrix &);// done
	Matrix& operator - (const Matrix &);// done
	Matrix& operator * (const Matrix &);
	int operator [](int i);
	bool operator == (const Matrix &);//done
	Matrix& operator += (int);//done
	Matrix& operator -= (int);//done
	Matrix& operator *= (int);//done
	Matrix& operator /= (int);//done
	Matrix& operator()(int, int);
	~Matrix();//done
};
ostream& operator <<(ostream&, const Matrix&);
ostream& operator >>(ostream&, const Matrix&);


#endif /* MATRIX_H_ */
