class Vector {

public:
	Vector(int s);

	double& operator[](int i);

	int Size();

private:
	double* elem; //pointer of elements
	int sz; // the number of elements

};

