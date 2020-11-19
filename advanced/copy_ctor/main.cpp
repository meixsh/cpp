#include <iostream>
using namespace std;

class A
{
	public:
		explicit A(int i): i(i) { cout << "A::A(int)" << endl; }
		int i;
};

int main()
{
	A a = 1;
}
