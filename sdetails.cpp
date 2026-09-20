#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, srn, department, state;
    int rollNo;
    float marks;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter SRN: ";
    cin >> srn;

    cout << "Enter Roll No: ";
    cin >> rollNo;

    cout << "Enter Department: ";
    cin >> department;

    cout << "Enter State: ";
    cin >> state;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\n--- Student Details ---" << endl;
    cout << "Name       : " << name << endl;
    cout << "SRN        : " << srn << endl;
    cout << "Roll No    : " << rollNo << endl;
    cout << "Department : " << department << endl;
    cout << "State      : " << state << endl;
    cout << "Marks      : " << marks << endl;

    return 0;
}