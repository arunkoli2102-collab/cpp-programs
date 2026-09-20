#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << "Greater number: " << a;
    else
        cout << "Greater number: " << b;

    return 0;
}