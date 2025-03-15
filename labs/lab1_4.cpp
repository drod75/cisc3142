#include <iostream>
#include <iomanip>
using namespace std;

// 4)  Write a program that prompts the user to input a decimal number and outputs the number 
//     rounded to the nearest integer (you cannot use a function).

int main() {
    double d;

    cout << "Enter a decimal number: ";
    cin >> d;

    // Determine the integer part and the fractional part.
    int i = static_cast<int>(d);
    double f = d - i;

    // Rounding logic
    int r;
    if (f >= 0.5) {
        r = i + 1;
    } else {
        r = i;
    }

    cout << "Rounded number: " << r << endl;

    return 0;
}
