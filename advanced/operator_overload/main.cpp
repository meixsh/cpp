#include <iostream>
using namespace std;

class Integer
{
	private:
		int i;
	public:
		Integer(int i): i(i) {}
		virtual ~Integer() {}
		const Integer operator +(const Integer &that) const
		{
			return Integer(i + that.i);
		}
		void f() { cout << "Integer:f() i " << i << endl; }

};

int main()
{
	Integer a(1), b(2);
	Integer c = a + b;
	c.f();
	Integer d = a + 2;
	d.f();
	Integer e = a + 3.5;
	e.f();
	return 0;
}
