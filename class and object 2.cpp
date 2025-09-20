#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int roll;
    float result;
    string name;
    void display()
    {
        cout <<"roll"<<roll<<endl;
        cout<<"result"<<result<<endl;
    }
};
int main()
{
    student rakib;
    student shihab;
    rakib.roll=1;
    rakib.result=3.90;
    shihab.roll=2;
    shihab.result=3.90;
    rakib.display();
    shihab.display();

    getch();
}

