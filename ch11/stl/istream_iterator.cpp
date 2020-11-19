#include  <iostream>
using namespace std;

#include <iterator>
#include <vector>

int main()
{
	vector::vector<int> v(4);
	vector::iterator<int> it = v.begin();
	istream_iterator<int> iit = cin.begin();
	cout << "Enter 4 int numbers and a char: " << endl;

	copy(iit, cin.end(), it);
	

	return 0;
}
