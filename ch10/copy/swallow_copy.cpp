#include <iostream>
using namespace std;

class A
{
	public:
		A(): _n(0), _p(NULL) {}
		explicit A(int n): _n(n), _p(new int[n]) {}
		A(int n, int *p): _n(n), _p(p) {}
		A(const A &that): _n(that._n), _p(that._p) {}
		A & operator=(const A &that) { _n = that._n, _p = that._p; return *this; }
		virtual ~A() { if (_p) {delete[] _p, _p = NULL;} }
	public:
		int & operator[](int i);
		const int & operator[](int i) const;

	private:
		int _n;
		int *_p;
};

int & A::operator[](int i)
{
	if (i < 0 || i >= 4)
		throw out_of_range("Out of range when trying to access the object...");
	return _p[i];
}

const int & A::operator[](int i) const
{
	if (i < 0 || i >= 4)
		throw out_of_range("Out of range when trying to access the object...");
	return _p[i];
}

int main()
{
	A a(4), b;
	for (int i = 0; i < 4; i++)
		a[i] = i + 1; 
	cout << "Before object assignment: " << endl;
	for (int i = 0; i < 4; i++)
		cout << a[i] << " ";
	cout << endl;

	b = a;
	cout << "After object assignment: " << endl;
	for (int i = 0; i < 4; i++)
		cout << b[i] << " ";
	cout << endl;

	return 0; 
}
