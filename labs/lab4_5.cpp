#include <iostream>
using namespace std;

int factorial(int n);

int main(){
    int n;

    cout << "To calculate a value for n, enter a number: ";
    cin >> n;

    if (n < 2) {
        cout << "E is 2" << endl;
    }else {
        float sum = 2;
        for (int i = 2; 2 < (n+1); i++) {
            sum += (1/(factorial(i)));
        }
    }

    return 0;
}

int factorial(int n){
    int fact = 1;
    for (int i = 1; i < n+1; i++){
        fact *= i;
    }
    return fact;
}