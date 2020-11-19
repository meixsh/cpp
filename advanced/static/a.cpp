#include <iostream>
using namespace std;

class A
{
	public:
		A() { A::i = 0; }
		void print() { cout << A::i << endl; }
		void set(int ii) { A::i = ii; }
	private:
		static int i;
};

int A::i;

int main()
{
	A a, b;
	a.set(10);
	b.print();

	return 0;
}
