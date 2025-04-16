#include <iostream>
using namespace std;

/*
2)	Write a program that prints first n Fibonacci numbers. ( User enters the value of n)
*/
 
int fibonacci(int n);

int main() {
    int n;

    cout << "Enter how many Fibonacci numbers to print: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "The " << i << "th Fibonacci number is: "  << fibonacci(i) << endl;
    }
    return 0;

}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    
    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}