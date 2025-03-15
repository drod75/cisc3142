#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 
    double length, radius, space;
     
    // Prompt the user for input

     
    cout << "Enter the length of the yard: ";
     
    cin >> length;
     
    cout << "\nEnter the radius of a fully grown tree: ";
     
    cin >> radius;
     
    cout << "\nEnter the required space between fully grown trees: ";
     
    cin >> space;
     
    const double pi = 3.14;
     
    double tree_area = pi * radius * radius;
     
    double tree_space = tree_area + space;
     
    double yard_area = length * length;
     
    int trees = floor(yard_area / tree_space);
     
    cout << "Total trees: " << trees << endl;
     
    cout << "Total Area: " << yard_area << endl;
     
    cout << "Total area per tree: " << tree_area << endl;

}