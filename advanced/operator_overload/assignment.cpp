#include <iostream>
using namespace std;

class Bar;

class Foo
{
	public: 
		Foo() {}
		operator Bar() const;
};

class Bar
{
	public:
		Bar() {}
		explicit Bar(const Foo&) { cout << "Bar::Bar(const Foo&): " << endl; }
};

Foo::operator Bar() const 
{
	return Bar(*this);
}

int main()
{
	Foo foo;
	Bar bar(foo);
	bar = foo;

	return 0;
}
