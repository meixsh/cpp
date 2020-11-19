#include <iostream>
using namespace std;

class X
{
	public:
		X();
		~X();
};

X::X()
{
	cout << "X::X() constructor." << endl;
}

X::~X()
{
	cout << "X::~X() destructor." << endl;
}

void f(int i)
{
	if (i < 10)
	{
		goto jump1;
	}
	X x1;
	jump1:
		switch(i)
		{
			case 1:
//				X x2;
				break;
			case 2:
//				X x3;
				break;
		}
}

int main()
{
	f(1);
	return 0;
}
