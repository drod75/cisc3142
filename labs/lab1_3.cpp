#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14;
    double radius;
    double area;
    double circumference;

    cout << "Enter the radius: ";
    cin >> radius;
    cout << endl;

    area = pi * radius * radius;
    cout << "Area: " << area << endl;

    circumference = 2 * pi * radius;
    cout << "Circumference = " << circumference << endl;

    return 0;
}
