#include<iostream>
using namespace std;
class rakib
{
private:
    int a,b;
public:
    rakib()//default constructor
    {
        a=b=0;
    }
    rakib(int x,int y)//parameterized constructor
    {
        a=x;
        b=y;
    }
    rakib(rakib &obj)//copy constructor
    {
        a=obj.a;        //na dileo automatic kaj kore;
        b=obj.b;
    }
    void display()
    {
        cout<<a<<endl<<b<<endl;
    }
};
int main()
{
    rakib obj1;
    obj1.display();
    rakib obj2(10,20);
    obj2.display();
    rakib obj3(obj2);//new object diyec all existing object k;a
    obj3.display();
    return 0;
}
