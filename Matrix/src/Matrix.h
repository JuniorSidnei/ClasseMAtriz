#pragma once
#include "ofMain.h"
#include <iostream>

class Matrix
{
private:
	float _Mat[3][3];

public:
	//Construtores
	Matrix();
	void Matrix::Ident();
	void Matrix::Floats(float a, float b, float c, float d, float e, float f, float g, float h, float i);

	//Getters
	float getDeterm();
	Matrix getInversa();
	


	//Sobrecargas
	void operator *(Matrix &mat);

	~Matrix();
};