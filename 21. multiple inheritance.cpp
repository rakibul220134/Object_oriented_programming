#include <iostream>
using namespace std;

class rakib
 {
  public:
    rakib() {
      cout << "BANGLADESH" << endl;
    }
};

class rasel
 {
  public:
   rasel() {
      cout << "pust" << endl;
    }
};

class shihab: public rakib, public rasel
 {
 };

int main() {
    shihab obj;

    return 0;
}
