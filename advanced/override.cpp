#include <iostream>
using namespace std;

class A
{
	public:
		A(int i): i(i) {}
		void print() { cout << "A::print() " << endl; }
		void print(int i) { cout << "A::print(int) i = " << i << " \\ "; print(); }
	private:
		int i;
};

class B: public A
{
	public:
		B(): A(10) {}
		void print() { cout << "B::print() " << endl;}

};

int main()
{
	A a(10);
	a.print();
	a.print(20);

	B b;
	b.print();
	b.A::print(30);
//	b.print(30);

	return 0;
}
