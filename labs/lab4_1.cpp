#include <iostream>
using namespace std;

/*
1)	Write a loop that takes whole numbers from the user and sums them until user enters an invalid input (input failure). Prompt the sum at the end. 
*/

int main() {

    int sum = 0;
    int number;

    cout << "Enter whole numbers: ";
    while (cin >> number) {
        sum += number;
    }

    cout << "Sum: " << sum << endl;


    return 0;
}