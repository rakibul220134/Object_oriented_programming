#include<bits\stdc++.h>
using namespace std;
class sum
{
	public:
	float div;
	int s;
	sum()
	{

	}
	sum(int a,int b,float c = 0.5)
	{
		div = a + b + c;
	}
	sum(int x,int y,int z)
	{
		s = x + y + z;
	}
	void display()
	{
		cout << div<<" float"<<endl;
	}
	void display2()
	{
		cout << s <<" int"<<endl;
	}
};
int main()
{
	int x,y,z;
	float p;
	cin >> x >> y >> z >> p;
	sum a(x,y,z);
	sum b(x,y,p);
	sum c(x,y);
	a.display2();
	b.display();
	c.display();
return 0;
}
