class Couple
{
	friend ostream & operator<<(ostream &os, const Couple &c);
	public:
		Couple(int a = 0, int b = 0): _a(a), _b(b) {}
		Couple operator+(const Couple &c);
		Couple operator*(const Couple &c);
	private:
		int _a, _b;
};
