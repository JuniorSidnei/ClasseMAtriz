#pragma once
#include "ofMain.h"
#include <iostream>

class Matrix
{
private:
	float _Mat[3][3];

public:

	void print();

	///Constructors
	//Pattern
	Matrix();
	//Identity
	Matrix Matrix::Identity();
	//Floats
	Matrix Matrix::Floats(float a, float b, float c, float d, float e, float f, float g, float h, float i);
	//Copy
	Matrix Matrix::Copy(Matrix &mat);

	void Matrix::Translation(float x, float y);
	void Matrix::Rotation(float angle);
	void Matrix::Scale(float scaleX, float scaleY);

	///Getters
	float getDeterminant();
	float getValueInPosition(int x, int y);
	void getTranspose();
	float getA();
	float getB();
	float getC();
	float getD();
	float getE();
	float getF();
	float getG();
	float getH();
	float getI();
	Matrix getInverse();
	
	///Setters
	void setValor(int x, int y, float valor);
	void setLocation(int x, int y);
	void setA(float value);
	void setB(float value);
	void setC(float value);
	void setD(float value);
	void setE(float value);
	void setF(float value);
	void setG(float value);
	void setH(float value);
	void setI(float value);

	///Overloads operators
	Matrix operator *(Matrix &mat);
	Matrix operator *=(Matrix &mat);
	Matrix operator =(Matrix &mat);
	Matrix operator +(Matrix &mat);
	Matrix operator +=(Matrix &mat);
	Matrix operator -(Matrix &mat);
	Matrix operator -=(Matrix &mat);

	~Matrix();
};