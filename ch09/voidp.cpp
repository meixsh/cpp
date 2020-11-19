#include <iostream>
using namespace std;

int func(void *);

int main()
{
	int a = 100;
	cout << func((void *)&a) << endl;
	
	return 0;
}

int func(void * number)
{
	return *(int*)number;
}
