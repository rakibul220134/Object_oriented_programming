#include<iostream>
using namespace std;
class rakib
{
    private:
      string name;
      int id;
       public:
           void get(string x,int y)
           {
            name=x;
            id=y;
           }
         string display1()
           {
              return name;
           }
           int display2()
           {
               return id;
           }
};
int main()
{
    rakib obj;
    string a;
    obj.get("rakib",220134);
    cout<<obj.display1()<<endl;
     cout<<obj.display2();
    return 0;
}

