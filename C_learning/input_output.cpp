#include <iostream>

int main(){
	// int length,width,height;

	// int total_area;

	// std::cout << "Please enter values for the length, width, and height, divided by spaces: " << std::endl;
	// std::cin >> length >> width >> height;
	// std::cout << "\nFor the length you entered: " << length << "\nFor the width you entered: " << width << "\nFor the height you entered: " << height << " \n";

	// total_area = length * width * height;

	// std::cout << "\nThe total area is: " << total_area << std::endl;
	

	char first_initial, last_initial;
	std::string first_name, last_name, full_name;
	int age;
	std::string dob;

	std::cout << "Please enter in your First Initial, Last Initial, Full Name, Age, and Date of Birth as so, DR David Rodriguez 23 01-01-2004" << std::endl;
	std::cin >> first_initial >> last_initial >> first_name >> last_name >> age >> dob;

	full_name = first_name + " " + last_name;

	std::cout << "\nYour full info is: " << "\nFirst Initial: " << first_initial << "\nLast Initial: " << last_initial << "\nFull Name: " << full_name << "\nAge: " << age << "\nDate of Birth: " << dob << "\n";

	return 0;
}