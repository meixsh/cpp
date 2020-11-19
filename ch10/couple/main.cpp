#include <iostream>
using namespace std;

#include "couple.h"

Couple Couple::operator+(const Couple &c)
{
	Couple _t(this->_a + c._a, this->_b + c._b);
	return _t;
}

Couple Couple::operator*(const Couple &c)
{
	Couple _t(this->_a * c._a, this->_b * c._b);
	return _t;
}

ostream & operator<<(ostream &os, const Couple &c) 
{
	os << "(" << c._a << ", " << c._b << ")";
	return os;
}

int main()
{
	Couple a(1, 2), b(3, 4), c, d;
	c = a + b;
	cout << c << endl;
	d = a * b;
	cout << d << endl;
	c = a + b + c;
	cout << c << endl;

	return 0;
}

