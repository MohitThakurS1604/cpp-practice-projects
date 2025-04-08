/*

C++ program to calculate the area and perimeter of a rectangle using a class

*/

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(10.5, 5.3);
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;
    return 0;
}
