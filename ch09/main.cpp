#include <iostream>
using namespace std;

int a = 100;

int & func();

int main()
{
	int & b = func();
	cout << b << endl;
	b = 99;
	cout << a << endl;
	return 0;
}

int & func()
{
	return a;
}
