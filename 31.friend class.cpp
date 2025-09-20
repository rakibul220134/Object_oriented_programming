// C++ program to demonstrate the working of friend class
#include <iostream>
using namespace std;
class A {
   private:
    int id=1;
    string name="rakib";
    public:
        friend class B;
};
class B {
    public:
        void display(A ob)// must be A class er object receive korte hbe....
        {
            cout<<ob.id<<endl;
             cout<<ob.name<<endl;
        }
};

int main() {
    A obj1;
    B obj2;
    obj2.display(obj1);
    return 0;
}
