#include "Matrix.h"
//TODO CONSTRUTOR DE COPIA
//TODO COPIA DE MATRIZ, OPERADOR = 
//TODO MULTIPLICAÇÃO DE MATRIZ, OPERADOR *


//TODO TRANSLACAO
//TODO ROTACAO
//TODO ESCALA


Matrix::Matrix()
{
}

void Matrix::Ident()
{
	//Atribuindo valores a _Matriz identidade
	for (int c = 0; c < 3; c++)
	{
		for (int l = 0; l < 3; l++)
		{
			if (l == c)
				this->_Mat[l][c] = 1;
			else
				this->_Mat[l][c] = 0;
		}
	}
	//Mostrando a matriz identidade
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << this->_Mat[i][j] << " ";
		}
		std::cout << std::endl;
	}

}

void Matrix::Floats(float a, float b, float c, float d, float e, float f, float g, float h, float i)
{
	//Cria uma nova matriz com valores desejados
	this->_Mat[0][0] = a;
	this->_Mat[0][1] = b;
	this->_Mat[0][2] = c;
	this->_Mat[1][0] = d;
	this->_Mat[1][1] = e;
	this->_Mat[1][2] = f;
	this->_Mat[2][0] = g;
	this->_Mat[2][1] = h;
	this->_Mat[2][2] = i;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << this->_Mat[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

float Matrix::getDeterm()
{
	//Retorna o valor do determinante da matriz
	float determ = 0;
	determ += _Mat[0][0] * _Mat[1][1] * _Mat[2][2];
	determ += _Mat[0][1] * _Mat[1][2] * _Mat[2][0];
	determ += _Mat[0][2] * _Mat[1][0] * _Mat[2][1];

	determ -= _Mat[0][2] * _Mat[1][1] * _Mat[2][0];
	determ -= _Mat[0][0] * _Mat[1][2] * _Mat[2][1];
	determ -= _Mat[0][1] * _Mat[1][0] * _Mat[2][2];


	std::cout << "determinante: " << determ << std::endl;
	return determ;
}

Matrix Matrix::getInversa()
{
	//A matriz criada sera a matriz inversa
	float mCof[3][3], mInv[3][3];
	//Varrendo todos os elementos
	for (int l = 0; l < 3; l++)
	{
		for (int c = 0; c < 3; c++)
		{
			//Criando a matriz de cofator de cada elemento
			float minor[2][2];
			int axI = 0, axJ = 0;
			//Colocando da matriz menor
			for (int minorL = 0; minorL < 3; minorL++)
			{
				for (int minorC = 0; minorC < 3; minorC++)
				{
					if ((l != minorL) && (c != minorC))
					{
						minor[axI][axJ] = _Mat[minorL][minorC];
						axJ++;
					}
					axI += axJ >= 2 ? 1 : 0;
					if (axJ >= 2)
						axJ = 0;
				}
			}
			//Calculando o determinante da matriz menor
			float det = 0;
			if ((l + c) % 2 == 0)
				det = 1;
			else
				det = -1;

			det *= (minor[0][0] * minor[1][1]) - (minor[0][1] * minor[1][0]);
			//std::cout << det << " " <<std::endl;
			mCof[l][c] = det;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (mInv[i][j] = mCof[i][j] / getDeterm() < 0)
				mInv[i][j] = 0;
			else
				mInv[i][j] = mCof[i][j] / getDeterm();
		}

	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << mInv[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return Matrix();
}

Matrix Matrix::operator *(Matrix &mat)
{

	//O matriz principal será a nova matriz multiplicada.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int auX = 0, auY = 0;
			
			this->_Mat[i][j] = this->_Mat[i][j];
		}
	}
	
	
}

Matrix::~Matrix()
{
}