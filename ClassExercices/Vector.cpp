#include "Vector.hpp"
#include <stdexcept>

Vector::Vector(int s){
	if (s <= 0) std::length_error{ "invalid size" };
		elem = new double[s];
	sz = s;
}

double& Vector::operator[](int i) {;
if (i < 0 || i >= sz) throw std::out_of_range{ "Vector::operator[] - Index Out of range exception" };
	return elem[i];
}

int Vector::Size() { return sz; }