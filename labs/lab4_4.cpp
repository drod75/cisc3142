#include <iostream>
using namespace std;

/*
4)	The population of town A is less than the population of town B. However, the population of town A is growing faster than the population of town B.
Write a program that prompts the user to enter the population and growth rate of each town. The program outputs after how many years the population of 
town A will be greater than or equal to the population of town B and the populations of both the towns at that time. 

(A sample input is: Population of town A= 5000, growth rate of town A=4% , population of town B = 8000, and growth rate of town B = 2%).
*/

int main() {
    int populationA, populationB, years = 0;
    double growthRateA = 0, growthRateB = 0;

    cout << "Enter the population of town A: ";
    cin >> populationA;

    cout << "Enter the growth rate of town A (as a percentage): ";
    cin >> growthRateA;

    cout << "Enter the population of town B: ";
    cin >> populationB;

    cout << "Enter the growth rate of town B (as a percentage), must be less than the growth rate of town A: ";
    cin >> growthRateB;
    while (growthRateB >= growthRateA) {
        cout << "Enter the growth rate of town B (as a percentage), must be less than the growth rate of town A: ";
        cin >> growthRateB;
    }    

    while (populationA <= populationB) {
        populationA += populationA * (growthRateA / 100);
        populationB += populationB * (growthRateB / 100);
        years++;
    }

    cout << "After " << years << " years, the population of town A will be greater than or equal to the population of town B." << endl;
    cout << "Population of town A: " << populationA << endl;
    cout << "Population of town B: " << populationB << endl;


    return 0;
}