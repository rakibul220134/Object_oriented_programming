#include<iostream>
using namespace std;
class Test
{
private:
int x;
int y;
public:
Test(int x = 0, int y = 0)
    {
     this->x = x;
     this->y = y;
    }
Test &setX(int a)
{
     x = a;
     return *this;
}
Test &setY(int b)
{
    y = b;
    return *this;
}
void print()
  {
    cout << "x = " << x << endl<<"y = " << y << endl;
  }
};

int main()
{
Test obj(5,5);// Chained function calls. All calls modify the same object
obj.setX(10); // as the same object is returned by reference
obj.setY(20);
obj.print();
return 0;
}
