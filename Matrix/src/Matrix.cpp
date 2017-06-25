#include "Matrix.h"

//TODO Transformação de um ofVec2f pela matriz (multiplicação de vetor pela matriz). O método terá a assinatura:
	 //ofVec2f Matrix3f::transform(const ofVec2f& vector, float z = 1.0f) const;

<<<<<<< HEAD

=======
//TODO translacao
//TODO rotacao
//TODO escala
//////Essas matrizes acima não sei se estão 100% certas
>>>>>>> origin/master

//TODO quando tiver tudo pronto, arrumar a inversa para matrizes


Matrix::Matrix()
{
}

//Mostrando a matriz
void Matrix::print()
{
	//Mostra ao usuario a matrix atual
	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << this->_Mat[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
//Setando valor em determinada posição da matriz
void Matrix::setValor(int x, int y, float valor) {
	_Mat[x][y] = valor;
}
void Matrix::setLocation(int x, int y)
{
	_Mat[x][y];
}
//Setando valor em A da matriz
void Matrix::setA(float value)
{
	_Mat[0][0] = value;
}
//Setando valor em B da matriz
void Matrix::setB(float value)
{
	_Mat[0][1] = value;
}
//Setando valor em C da matriz
void Matrix::setC(float value)
{
	_Mat[0][2] = value;
}
//Setando valor em D da matriz
void Matrix::setD(float value)
{
	_Mat[1][0] = value;
}
//Setando valor em E da matriz
void Matrix::setE(float value)
{
	_Mat[1][1] = value;
}
//Setando valor em F da matriz
void Matrix::setF(float value)
{
	_Mat[1][2] = value;
}
//Setando valor em G da matriz
void Matrix::setG(float value)
{
	_Mat[2][0] = value;
}
//Setando valor em H da matriz
void Matrix::setH(float value)
{
	_Mat[2][1] = value;
}
//Setando valor em I da matriz
void Matrix::setI(float value)
{
	_Mat[2][2] = value;
}
//Retornando valores de x e y da matriz
float Matrix::getValueInPosition(int x, int y)
{
	return _Mat[x][y];
	std::cout << "Valor solicitado: " << _Mat[x][y];
}
//Mostra a matriz transposta
void Matrix::getTranspose()
{
	int aux = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (j != i)
			{
				aux = _Mat[i][j];
				_Mat[i][j] = _Mat[j][i];
				_Mat[j][i] = aux;
			}
		}
	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << _Mat[i][j] << " ";
		}
		std::cout << std::endl;
	}

}
//Mostrando o valor em A
float Matrix::getA()
{
	return _Mat[0][0];
}
//Mostrando o valor em B
float Matrix::getB()
{
	return _Mat[0][1];
}
//Mostrando o valor em C
float Matrix::getC()
{
	return _Mat[0][2];;
}
//Mostrando o valor em D
float Matrix::getD()
{
	return _Mat[1][0];
}
//Mostrando o valor em E
float Matrix::getE()
{
	return  _Mat[1][1];
}
//Mostrando o valor em F
float Matrix::getF()
{
	return _Mat[1][2];
}
//Mostrando o valor em G
float Matrix::getG()
{
	return _Mat[2][0];
}
//Mostrando o valor em H
float Matrix::getH()
{
	return _Mat[2][1];
}
//Mostrando o valor em I
float Matrix::getI()
{
	return _Mat[2][2];
}
//Matriz identidade inicializada
Matrix Matrix::Identity()
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
	print();

	return Matrix();
}
//Iniciando uma matriz com valores desejados
Matrix Matrix::Floats(float a, float b, float c, float d, float e, float f, float g, float h, float i)
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

	
		std::cout << "Matriz inicializada com sucesso!" << std::endl;

		return Matrix();
}
//Matriz de copia
Matrix Matrix::Copy(Matrix &mat)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			_Mat[i][j] = mat.getValueInPosition(i, j);
		}
	}
	return mat;
}
//Matriz de translação
void Matrix::Translation(float x, float y)
{
	//Criar a matriz identidade e através dela, colocar o x e o y nas suas posicões, regra da mão direita
	// 1 0 x
	// 0 1 y
	// 0 0 1
	Identity();
	_Mat[2][0] = x;
	_Mat[2][1] = y;
}
//Matriz de rotação
void Matrix::Rotation(float angle)
{
	// cos0 -sin0 0
	// sin0  cos0 0
	//  0    0	  1
	_Mat[0][0] = cos(angle); _Mat[0][1] = -sin(angle); _Mat[0][2] = 0;
	_Mat[1][0] = sin(angle); _Mat[1][1] = cos(angle);  _Mat[1][2] = 0;
	_Mat[2][0] = 0;		     _Mat[2][1] = 0;		   _Mat[2][2] = 1;
}
//Matriz de escala
void Matrix::Scale(float scaleX, float scaleY)
{
	//Criar a matriz identidade e através dela, colocar o x e o y nas suas posicões, regra da mão direita
	//scalex		0		0
	//	0		 scaley		0
	//	0			0		1
	Identity();
	_Mat[0][0] = scaleX;
	_Mat[1][1] = scaleY;
}
//Retorna o valor do determinante
float Matrix::getDeterminant()
{
	//Retorna o valor do determinante da matriz
	float determ = 0;
	determ += _Mat[0][0] * _Mat[1][1] * _Mat[2][2];
	determ += _Mat[0][1] * _Mat[1][2] * _Mat[2][0];
	determ += _Mat[0][2] * _Mat[1][0] * _Mat[2][1];

	determ -= _Mat[0][2] * _Mat[1][1] * _Mat[2][0];
	determ -= _Mat[0][0] * _Mat[1][2] * _Mat[2][1];
	determ -= _Mat[0][1] * _Mat[1][0] * _Mat[2][2];


	std::cout << "Determinante: " << determ << std::endl;
	return determ;
}
//Arrumar para matrizes
Matrix Matrix::getInverse()
{
	///A matriz criada sera a matriz inversa
	float mCof[3][3];
	float mInv[3][3];

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
			mCof[l][c] = det;
		}
	}
	//Calculo da inversa
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mInv[i][j] = mCof[i][j] / getDeterminant();
			if (mInv[i][j] <= 0)
				mInv[i][j] = 0;
		}
	}
	getInverse();
	//Mostrando a matriz inversa na tela
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
//Sobrecarga, multiplicação de matrizes
Matrix Matrix::operator*(Matrix &mat)
{
	Matrix mullMat;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			float valor = 0;

			for (int k = 0; k < 3; k++) {
				valor += _Mat[i][k] * mat.getValueInPosition(k, j);
			}

			mullMat.setValor(i, j, valor);
		}
	}

	mullMat.print();
	return mullMat;

}
//Sobrecarga, multiplicação e retornando o valor a matriz
Matrix Matrix::operator*= (Matrix &mat)
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++) {
				// Soma direto na matriz pra gravar o resultado
				_Mat[i][j] += _Mat[i][k] * mat.getValueInPosition(k, j);
			}
		}
	}

	print();
	return *this;
}
//Sobrecarga, atribuindo uma matriz a outra
Matrix Matrix::operator=(Matrix &mat)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			_Mat[i][j] = mat.getValueInPosition(i, j);
		}
	}
	
	return mat;
}
//Sobrecarga, soma de matrizes
Matrix Matrix::operator+(Matrix & mat)
{
	Matrix sumMat;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sumMat.setValor(i, j, (_Mat[i][j] + mat.getValueInPosition(i, j)));
		}
	}

	sumMat.print();
	return sumMat;
}
//Sobrecarga, soma e atribuição de matrizes
Matrix Matrix::operator+=(Matrix &mat)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			// Soma direto na matriz pra gravar o resultado
			_Mat[i][j] += mat.getValueInPosition(i, j);
		}
	}

	print();
	return *this;
}
//Sobrecarga, subtração de matrizes
Matrix Matrix::operator-(Matrix &mat)
{
	Matrix subMat;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			subMat.setValor(i, j, (_Mat[i][j] - mat.getValueInPosition(i, j)));
		}
	}

	subMat.print();
	return subMat;
}
//Sobrecarga, subtração e atribuição de matrizes
Matrix Matrix::operator-=(Matrix &mat)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			_Mat[i][j] -= mat.getValueInPosition(i, j);
		}
	}

	print();
	return *this;
}


ofVec2f Matrix::transform(const ofVec2f & vector, float z) const
{
	float valor;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			for (int k = 0; k < 3; k++) {
				//calcula a multiplica��o do vetor nas duas posicoes pela linha da matriz
				valor += vector.x * _Mat[i][k];
				valor += vector.y * _Mat[i][k];
			}

			
		}
	}
	return vector;
}

Matrix::~Matrix()
{
}
