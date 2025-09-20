#include<iostream>
using namespace std;
class binary
{
    public :
    string s;
    void get_data()
    {
        cout<<"enter the binary number:"<<endl;
        cin>>s;
    }
    void complement()
    {
        for(int i=0;s[i]!=0;i++)
        {
            if(s[i]=='1')
                s[i]='0';
              else if (s[i]='0')
                 {
                  s[i]='1';
                 }
        }
        cout<<"1's complement is="<<s;
    }

};
int main()
{
    binary A;
    A.get_data();
    A.complement();
    return 0;
}
