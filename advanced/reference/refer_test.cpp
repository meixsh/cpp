#include <iostream>
using namespace std;

class A
{
	private:
		int &i;
	public:
		A(const int &i): i(i) {}
		void f() { cout << i << endl; }
};

int main()
{
	int j = 10;
	A a(j);
	a.f();
	j = 100;
	a.f();
	return 0;
}
