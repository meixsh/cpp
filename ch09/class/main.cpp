#include <iostream>
using namespace std;

class A
{
	public:
		A(): a(0), b(0) {}
		A(int a, int b): a(a), b(b) {}
	public:
		int a, b;
};

int main()
{
	A a;
	cout << a.a << " " << a.b << endl;
	A b(1, 2);
	cout << b.a << " " << b.b << endl;
	A *c = new A;
	cout << c->a << " " << c->b << endl;
	A *d = new A(3, 4);
	cout << d->a << " " << d->b << endl;
	a = A(7, 8);
	cout << a.a << " " << a.b << endl;
	return 0;
}
