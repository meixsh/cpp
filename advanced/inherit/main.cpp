#include <iostream>
using namespace std;

class A
{
	private:
		int i;
	public:
		A(): i(10) {}
		void print() { cout << "A::print() i = " << i << endl; }
};

class B: public A
{
	private:
		int j;
	public:
		B(): j(20) {}
		void print() { cout << "B::print() j = " << j << endl; }

};


int main()
{
	A a;
	B b;
	cout << sizeof(a) << " " << sizeof(b) << endl;
	a.print();
	b.print();
	b.A::print();

	int *p = (int *)&b;
	*p = 100;
	b.A::print();

	return 0;
}
