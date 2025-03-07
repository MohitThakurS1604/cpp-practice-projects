#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    char grade;

public:
    // Method to set student details
    void setDetails(string n, int r, char g) {
        name = n;
        rollNumber = r;
        grade = g;
    }

    // Method to display student details
    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student1;

    // Setting student details
    student1.setDetails("John Doe", 101
