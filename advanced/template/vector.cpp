#include <iostream>
using namespace std;


/*
 *
 *
 */
template <class T>
class Vector
{
	public:
		Vector(int);
		~Vector() {};
		Vector(const Vector &);
		Vector& operator=(const Vector&);
		T& operator[](int);
	private:
		T *m_elements;
		int m_size;
};

template <class T>
Vector<T>::Vector(int size): m_size(size)
{
	m_elements = new T[m_size];
}

template <class T>
T& Vector<T>::operator[](int indx)
{
	if (indx < m_size && indx > 0)
		return m_elements[indx];
	else
	{
		cout << "Vector<T>::operator[]: illegal indx" << endl;
		exit(1);
	}
}

int main()
{
	Vector<int> v1(100);
//	Vector<Complex> v2(256);

	v1[20] = 10;
//	v2[20] = v1[20];
	cout << v1[20] << endl;
	return 0;
}
