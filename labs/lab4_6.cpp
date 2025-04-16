#include <iostream>
#include <string>
using namespace std;

/*
6)	Write a function that checks if given a string is a palindrome or not. 
(Note: String characters can be accessed by using index numbers. 
i.e. if string str = “Hello”, then str[0] is H, str[1] is e, str[2] is l, …. 
Hint: include <string> to use str.length() function to get string length)


Function prototype is given below:


bool isPalindrome (string str); 

*/

bool isPalindrome(string str);

int main() {
    string pal;
    bool isPal;
    cout << "Enter a string: ";
    cin >> pal;
    cout << endl;
    isPal = isPalindrome(pal);
    if (isPal == true) {
        cout << "The string is a palindrome" << endl;
    } else {
        cout << "The string is not a palindrome" << endl;
    }

    return 0;
}

bool isPalindrome(string str) {
    int a =0, b = str.length() - 1;
    while (a < b) {
        if (str[a] != str[b]) {
            return false;
        }
        a++, b--;
    }
    return true;

}