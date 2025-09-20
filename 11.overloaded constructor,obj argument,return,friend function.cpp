#include<bits\stdc++.h>
using namespace std;
class area
{
    public:
    float a,b,c,ar;
    string name;
    int roll;
    area()
    {
        cout << "rakib"<<endl;
    }
    area(string s,int r)
    {
        name = s;
        roll = r;
        input();
    }
    void input()
    {
        cout << "Enter three side for the area of a triangle:";
        cin >> a >> b >> c;
    }
    void display()
    {
        cout << "Name: "<<name<<endl;
        cout << "Roll: "<<roll<<endl;
        cout << "Area of triangle: "<<ar<<endl;
    }
    friend area obj_as(area);
};
area obj_as(area a)
{
    area b;
    float s;
    s = (a.a+a.b+a.c)/2;
    b.ar = sqrt(s*(s-a.a)*(s-a.b)*(s-a.c));
    b.name = a.name;
    b.roll = a.roll;
    return b;//object return ;
}

int main()
{
  area a;
    area b("rakib",220134);
    area c = obj_as(b);
    c.display();
    return 0;
}
