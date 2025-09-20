#include<iostream>
using namespace std;
class first
{
public:
    void print()
    {
        cout<<"rakib";
    }
};
class second
{
    first obj1;
public:
    void print()
    {
        obj1.print();//first class er object k second class member variable use korte hy;
    }
};
int main()
{
    second obj2 ;
    obj2.print();
    return 0;
}
