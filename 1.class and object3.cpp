#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int roll;
    float result;
    string name;
    void set_value(int a,float b)
      {
        roll=a;
        result=b;
      }
    void display()
    {
        cout <<"roll"<<roll<<endl;
        cout<<"result"<<result<<endl;
    }
};
int main()
{
    student rakib,shihab;
    //student shihab;
    rakib.set_value(1,3.90);
    shihab.set_value(2,3.90);

    rakib.display();
    shihab.display();
    getch ();
}
