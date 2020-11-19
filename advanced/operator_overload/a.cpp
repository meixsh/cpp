class Orange;

class Apple
{
	public:
		operator Orange() const;
};

class Orange
{
	public:
		explicit Orange(Apple);
};

void f(Orange) {}

int main()
{
	Apple a;
	f(a);
	return 0;
}
