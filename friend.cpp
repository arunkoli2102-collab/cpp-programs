#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int marks;

public:
    string name;

    void details()
    {
        cout << "Enter the name: ";
        cin >> name;

        cout << "Enter the marks: ";
        cin >> marks;
    }

    friend void show(Student s);
};

void show(Student s)
{
    cout << "\nStudent Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student s;

    s.details();
    show(s);

    return 0;
}

