#include <iostream>
using namespace std;

class Friend
{
public:
  Friend(){
    cout << "Friend\n";
  }
};

class enemy
{
public:
  enemy(){
    cout << "Enemy\n";
  }
};

class Jakaria : public Friend{ };

class rakib : public Friend, public enemy{ };

int main()
{
  Jakaria obj1;
  rakib obj2;
  return 0;
}
