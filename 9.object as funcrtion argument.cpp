#include<iostream>
using namespace std;
class time
{
public:
    int h,m;
    void get_time()
       {
           cout<<"enter the hours & minutes:";
          cin>>h>>m;
       }
       void put_time()
       {
        cout<<"hours="<<h<<endl<<"minutes="<<m<<endl;
       }
       void sum(time a,time b);
};
 void time::sum(time a ,time b)
       {
        h=(a.m+b.m)/60;//
        m=(a.m+b.m)%60;
        h=h+(a.h+b.h);
       }
int main()
{
    time t1, t2,t3;
    t1.get_time();
    t2.get_time();
    t3.sum(t1,t2);//object pass as f(argument);
    //t1.put_time();
    //t2.put_time();
    t3.put_time();
    return 0;
}
