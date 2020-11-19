#include <iostream>
#include <algorithm>

using namespace std;

const int size = 16;

int main()
{
	int a[size];
	for (int i = 0; i < size; i++)
		a[i] = i;
	int key = 7;
	int *p = find(a, a+size, key);
	if (p == a + size)
		cout << "not found" << endl;
	else 
		cout << *p << " found in array a" << endl;

	return 0;
}
