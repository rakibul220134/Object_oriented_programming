#include<iostream>
using namespace std;
class rakib
{
    private:
       int a,b;
       public:
           void get(int a,int b)
           {
             this->  a=a;
             this->  b=b;
           }
           void display()
           {
               cout<<a<<endl<<b<<endl<<"sum="<<a+b;;

           }
};
int main()
{
    rakib obj;
    obj.get(10,5);
    obj.display();
    return 0;
}

