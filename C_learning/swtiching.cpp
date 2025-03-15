#include <iostream>
using namespace std;

int main() {
	char letter_grade;

	while (cin) {
		cout << "Please input a letter grade: ";
		cin >> letter_grade;

		switch (letter_grade) { 
			case 'A':
				cout << "Your grade is 4.0" << endl;
				break;
			case 'B':
				cout << "Your grade is 3.0" << endl;
				break;
			case 'C':
				cout << "Your grade is 2.0" << endl;
				break;
			case 'D':
				cout << "Your grade is 1.0" << endl;
				break;
			case 'F':
				cout << "Your grade is 0.0" << endl;
				break;
		}
	}
}