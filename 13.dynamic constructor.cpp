#include<bits/stdc++.h>
using namespace std;
class rakib
{
    char *name;
    int length;
public:
    rakib()//default constructor.
    {
       //iccha khushi kaj korte pari...
    }
    rakib(char *s)//parameterized constructor
    {
        length=strlen(s);
        name= new char[length+1];//dynamic allocation;
        strcpy(name,s);//

    }
    void join(rakib &a, rakib &b)//scope resoulation operator diyeo kora jetw;
    {
        length=a.length+b.length;
       // delete name;
        name=new char[length+1];//null character jnno size 1 barono hyece
        //strcpy(name,a.name);
        name=a.name;//copy er motw kaj korbe
        strcat(name,b.name);
    }
    void display()
    {
        cout<<name<<endl;

    }
};
int main()
{
    char *first="rasel ";//char array or string bolte pari...
    rakib obj1("first "),obj2("jakaria "),obj3("shihab");
    rakib obj4,obj5;
    obj1.display();
    obj2.display();
    obj3.display();
    obj4.join(obj1,obj2);
    obj4.display();
    obj5.join(obj4,obj3);
    obj5.display();

}
