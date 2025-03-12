#include <iostream>
using namespace std;

int bigger(int a, int b) {
	return ((a>b)?a:b);
}

int main() {
	cout << bigger(3,4) << endl;
}