#include <iostream>
using namespace std;

class A
{
    public:
    void display() {
    cout<<"BANGLADESH"<<endl;
  }
};

class B : public A
 {
     public:
     void rakib(){
     cout<<"rakib"<<endl;
    }
 };

class C : public B
 {
     public:
     void islam(){
     cout<<"pust"<<endl;
    }
 };

int main()
{
    C obj;
    obj.display();
    obj.rakib();
    obj.islam();
    return 0;
}
