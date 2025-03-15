#include <iostream>
using namespace std;

int main() {
    int total_seconds;

    cout << "Enter the elapsed time in seconds: ";
    cin >> total_seconds;

    int hours = total_seconds / 3600;
    int rsec = total_seconds % 3600;
    int minutes = rsec / 60;
    int seconds = rsec % 60;

    cout << "Elapsed time: " << hours << ":" << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << endl;

    return 0;
}	
