#include <iostream>
using namespace std;

int main()
{
	try {
	    int a,b;
	    cout<<"enter 1st number:";
	    cin>>a;
        cout<<"enter 2nd number:";
	    cin>>b;
	    if (b==0)
        {
          throw b;
        }
        double result=(double) a/b;
        cout<<"Result="<<result<<endl;
	}
	catch (...) //int x dileo no pblm//... sob data typer jnoo projojjo.
	{
		cout << "Divided by zero is not possible."<<endl;
	}
	return 0;
}
