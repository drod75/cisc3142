#include <iostream>
#include <string>
using namespace std;

/*
7)	Write a function, reverseDigit, that takes an integer as a parameter and changes the number with its digits reversed. 
For example, the value of reverseDigit(12345) is 54321; the value of reverseDigit(5600) is 65; the value of reverseDigit(7008) is 8007; 
and the value of reverseDigit(-532) is -235. Function does not return a value. It changes the actual parameter.
*/

void reverseDigit(int &num);

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    reverseDigit(num);

    cout << "Reversed number: " << num << endl;

    return 0;
}

void reverseDigit(int &num) {
    string str = to_string(num);
    string rev;
    if (str[0] == '-') {
        rev = "-";
        for (int i = str.length() - 1; i >= 1; i--) {
            rev.append(1, str[i]);
        }
        num = stoi(rev);
    }else {
        for (int i = str.length() - 1; i >= 0; i--) {
            rev.append(1, str[i]);
        }
        num = stoi(rev);
    }
}