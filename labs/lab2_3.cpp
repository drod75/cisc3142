#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	cout << "Please enter your weight in kilograms, kg: ";
	double kg;

	cin >> kg;
	cout << endl;

	double lbs = kg * 2.2;

	cout << fixed << setprecision(2) << "Your weight in pounds is: " << lbs << endl;
}