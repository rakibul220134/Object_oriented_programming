#include <b>
using namespace std;
class Address {
public:
string upzilla,district,division;
Address( string upzilla, string district, string division)
{
this->upzilla=upzilla;
this->district = district;
this->division = division;
}
};
class Person
{
private:
Address *address;
public:
string name;
Person(string name, Address *address)
{
this->name = name;
this->address = address;
}
void display()
{
cout<< name<<endl<<address->upzilla<<endl<<address->district<<endl<<address->division<<endl;
}
};
int main()
{
Address add1("parbatipur","dinajpur","rangpur");
Person p1("Rakib", &add1);
p1.display();
return 0;
}
