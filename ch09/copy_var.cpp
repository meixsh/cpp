#include <iostream>
using namespace std;

int a = 100;

int & func();

int main()
{
	int & b = func();
	cout << b << " " << a << endl;
	b--;
	cout << b << " " << a << endl;
	return 0;
}

int & func()
{
	return a;
}
