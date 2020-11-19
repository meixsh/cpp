#include <iostream>
using namespace std;

class A
{
	public:
		int i;
		A(int i): i(i) { cout << "A::A() i " << i << endl; }
		void f() { cout << "A::f() i " << i << endl; }
		void f(int k) { cout << "A::f() k " << k << endl; }
};

class B: public A
{
	public:
		int j;
		B(int i, int j): A(i), j(j) { cout << "B::B() i " << i << " j " << j << endl; }
		void f() { cout << "B::f() i " << i << " j " << j << endl; }
};

int main()
{
	A a(10);
	B b(100, 200);
	a = b;
	a.f();
	a.f(2);
	b.f();
	b.f(4);
}
