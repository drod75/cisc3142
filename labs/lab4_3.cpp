#include <iostream>
using namespace std;

/*
3)	Redo question-1. Write a loop that takes whole numbers from the user and sums them until user enters an invalid input (input failure). 
If user enters a negative value, do not add that negative value to sum. Prompt the sum at the end. (use continue)
*/

int main() {
    int sum = 0;
    int number;

    cout << "Enter whole numbers: ";
    while (cin >> number) {
        if (number < 0) {
            continue;
        }
        sum += number;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}