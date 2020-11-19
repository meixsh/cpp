#include <iostream>
using namespace std;

class A
{
	public:
		void f(char *a) { cout << "A::f(char *) " << a << endl; }
		void f(const char *a) { cout << "A::f(const char *) " << a << endl; }
};

class B: public A
{
};

int main()
{
	A a;
//	int i = 10;
//	a.f(i);

	const char *p = "hello world.";
	a.f(p);

	return 0;
}
