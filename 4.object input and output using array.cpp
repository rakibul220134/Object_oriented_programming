#include<iostream>
using namespace std;
class employee
{
public:
    string name;
    float age;
    int salary;
    void get_data();
    void put_data()
   {
    cout<<name<<endl<<age<<endl;
   }
};
  void employee::get_data()//scope resulation operator
                      //global variable er value control korte pare.
   {
    cin>>name;
    cin>>age;
   }
int main()
{
    int size=3,i;
    employee manager[size];
    for(i=0;i<size;i++)
    {
        manager[i].get_data();
    }
     for(i=0;i<size;i++)
    {
        manager[i].put_data();
    }
    return 0;
}
