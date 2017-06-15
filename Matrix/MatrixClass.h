class MatrixClass
{
private:
	int _matrix[2][2];

public:
	MatrixClass();
	void MatrixClass::MatrixIdent();
	void MatrixClass::MatrixFloat(float a, float b, float c, float d, float e, float f, float g, float h, float i);
	void MatrixClass::MatrixCopy(MatrixClass matrixCopy);
	void MatrixClass::MatrixDetermi(MatrixClass Matrix);

	~MatrixClass();

};