/*

C++ program to create a class for car details

*/

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    void setCarDetails(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    void displayCarDetails() {
        cout << "Car Details:\n";
        cout << "Brand: " << brand << "\nModel: " << model << "\nYear: " << year << endl;
    }
};

int main() {
    Car myCar;
    myCar.setCarDetails("Toyota", "Camry", 2022);
    myCar.displayCarDetails();
    return 0;
}
