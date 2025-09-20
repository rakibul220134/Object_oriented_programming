// C++ program to implement
// Interface
#include <iostream>
#include <string>
using namespace std;

// Interface(Abstract class
// with pure virtual function)
class Base
{
public:
	virtual string A() = 0;
};

class child : public Base
{
public:
	string A()
	{
	return "Rakib";
	}
};

// Driver code
int main()
{
	child Obj;
	Base* ptr;
	ptr = &Obj;
	cout << ptr->A();
	return 0;
}
