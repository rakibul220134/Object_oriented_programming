#include<iostream>
using namespace std;

void area(float r)
{
  float A=3.1416*r*r;
 cout<<"circle area is="<<A<<endl;
}
void area(int b,int h)
{
    int A=(b*h)/2;
    cout<<"triangle area is="<<A<<endl;
}
void area(int l,double w)
{
    double A=(l*w);
    cout<<"rectangle area is="<<A<<endl;
}
int main()
{
    area(2.5);
    area(3,4);
    area(6,5.3);
    return 0;
}
