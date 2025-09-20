#include<iostream>
using namespace std;

void display_1(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void display_2(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b,n;
    cout<<"enter number 1 or 2:"<<endl;
    cin>>n;
    cout<<"enter the two number"<<endl;
    cin>>a>>b;
    if(n==1)
     {
     display_1(a,b);//passing by value(value pass);
     cout<<"after swapping:"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
     }
    else if(n==2)
    {
     display_2(&a,&b);//passing by reference(address pass);
     cout<<"after swapping:"<<"a="<<a<<endl<<"b="<<b<<endl;
    }
    else
        {
         cout<<"error!!!!";
        }
    return 0;
}
