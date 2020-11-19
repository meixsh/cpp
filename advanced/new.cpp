#include <iostream>
using namespace std;

class A
{
	private:
		int i;
	public:
		A();
		~A();
		void set(int i);
};

A::A()
{
	cout << "A::A(int i) i = " << this->i << endl;
}

A::~A()
{
	cout << "A::~A() i = " << this->i << endl;
}

void A::set(int i)
{
	this->i = i;
}

int main()
{
	A *p = new A[10];
	for (int i = 0; i < 10; i++)
		p[i].set(i);

	delete p;
	return 0;
}
