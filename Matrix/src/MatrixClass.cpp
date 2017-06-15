#include "MatrixClass.h"
#include <iostream>

#define max 2

MatrixClass::MatrixClass()
{

}

void MatrixClass::MatrixIdent()
{
	for (int l = 0; l < max; l++)
	{
		for (int c = 0; c < max; c++)
		{
			if (l == c)
				this->_matrix[l][c] = 1;
			else
				this->_matrix[l][c] = 0;
		}
	}
	std::cout << this->_matrix << std::endl;

}

void MatrixClass::MatrixFloat(float a, float b, float c, float d, float e, float f, float g, float h, float i)
{
	float arr[3][3];
	arr[0][0] = a;
	arr[0][1] = b;
	arr[0][2] = c;
	arr[1][0] = d;
	arr[1][1] = e;
	arr[1][2] = f;
	arr[2][0] = g;
	arr[2][1] = h;
	arr[2][2] = i;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << " " << arr[i][j];
		}
		std::cout << std::endl;
	}
}

void MatrixClass::MatrixCopy(MatrixClass matrixCopy)
{
	MatrixClass matrix;
	matrix = matrixCopy;
}

void MatrixClass::MatrixDetermi(MatrixClass Matrix)
{

}



MatrixClass::~MatrixClass()
{
}