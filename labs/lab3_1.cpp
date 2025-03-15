#include <iostream>
using namespace std;


// 1)	Write a program that prompts the user to input an integer between 0 and 35. 
// If the number is less than or equal to 9, the program should output the number; 
// otherwise, it should output A for 10, B for 11, C for 12,..., and Z for 35. 
// (Hint: Use the cast operator, static_cast<char>(), for numbers >= 10.)

int main()
{

	// variables for input and char are detected
	int user_input;
	char letter;

	// initial prompt
	cout << "Enter a number between 1 and 26: ";
	cin >> user_input;
	cout << endl;

	// conditional statements
	if (user_input <= 9) {
		cout << "Your number is: " << user_input << endl;
	}else {
		letter = static_cast<char>(user_input + 55);
		cout << "Your number is: " << letter << endl;
	}

	return 0;
}