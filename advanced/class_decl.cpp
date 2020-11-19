class B;
class A
{
public:
    void func(B b); // right
private:
//    B b; // error
};

int main()
{

	return 0;
}
