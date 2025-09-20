#include<iostream>
using namespace std;
class unary
{
private:
    int num;
public:
    unary():num(8)
    {

    }
    void operator++()
    {
        num=num+2;
    }
    void print()
    {
        cout<<"the count is:"<<num;
    }
};
int main()
{
    unary obj;
    ++obj;
    obj.print();
    return 0;
}
