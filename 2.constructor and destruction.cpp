#include<bits/stdc++.h>
using namespace std ;
class student
{
public:
    int roll;
    float result;
    student()
    {
    cout<<"default constructor"<<endl;
    }
    student(int a,float b)
    {
        roll=a;
        result=b;
        cout<<"parametrized constructor"<<endl;
    }
    void display()
    {
        cout<<"roll "<<roll<<endl;
        cout<<"result "<<result<<endl;
    }
    ~student()
    {
        //cout<<"rakib"<<endl;
    }
};
int main()
{
    student rakib;//() dileo pblem nei;
    student rasel(1,3.90);
   // rasel.display();
    student *p=&rasel;
    p->display();
    return 0;

}
