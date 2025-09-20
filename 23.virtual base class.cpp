#include <iostream>
using namespace std;

class A {
public:
	int a=10;
    int X() // constructor
	{
		return a;
	}
};

class B : virtual public A {
};

class C : virtual public  A {
};

class D : public B, public C {
};

int main()
{
	D object; // object creation of class d
	cout << "a = " << object.X() << endl;

	return 0;
}
