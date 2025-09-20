// C++ program to calculate the area of a square and a circle

#include <iostream>
using namespace std;
// Abstract class
class Shape {
   protected:
    float dimension;
   public:
    void getDimension() {
        cin >> dimension;
    }
    // pure virtual Function
    virtual float calculateArea() = 0;
};
// Derived class
class Square : public Shape {
   public:
    float calculateArea() {
        return dimension * dimension;
    }
};
int main()
 {
    Square square;
    cout << "Enter the length of the square: ";
    square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;
    return 0;
}
