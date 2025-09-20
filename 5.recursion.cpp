#include<iostream>
using namespace std;
int fact_2(int n)
{
   if(n==1)//base case;
   {
       return 1;
   }
       return n*fact_2(n-1);
}
int fact_1(int n)
{
    int i,sum=1;
  for(i=1;i<=n;i++)
  {
      sum=sum*i;

  }
  cout<<sum;
}
int main()
{
    int a;
    cout<<"enter the number 1 or 2"<<endl;
    cin>>a;
     if(a==1)
       {
        int n;
        cout<<"enter the number"<<endl;
         cin>>n;
        fact_1(n);
      }
    else
    {
        int n;
        cout<<"enter the number"<<endl;
        cin>>n;
        int factorial_2=fact_2(n);
        cout<<factorial_2;
    }
    return 0;
}
