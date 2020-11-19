#include <iostream>
using namespace std;

class A
{
	public:
		A(): i(10) {}
		virtual void f() { cout << "A::f() " << i << endl; }
		int i;
};

class B: public A
{
	public:
		B(): j(20) {}
		virtual void f() { cout << "B::f() " << j << endl; }
		int j;

};

int main()
{
	A a;
	B b;
	a = b;
	a.f();

	int *p1 = (int *)&a;
	int *p2 = (int *)&b;
	*p1 = *p2;
	a.f();
	A *p = &a;
	p->f();

	return 0;
}
