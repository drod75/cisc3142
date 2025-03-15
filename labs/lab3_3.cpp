#include <iostream>

using namespace std;

int main() 
{
    char gender;
    float body_weight;
    float wrist_measurement;
    float b;
    float body_fat;
    float body_fat_percentage;

    cout << "Enter your gender (M/F): ";
    cin >> gender;
    cout << endl;

    if (gender == 'M' || gender == 'm') {
        cout << "You are a male." << endl;
        cout << "Enter your body weight: ";
        cin >> body_weight;
        cout << endl;

        cout << "Enter your wrist measurement: ";
        cin >> wrist_measurement;
        cout << endl;

        float a1 = (body_weight * 1.082) + 94.42;
        float a2 = wrist_measurement * 4.15;
        b = a1 - a2;
        body_fat = body_weight - b;
        body_fat_percentage = (body_fat * 100 )/ body_weight;

        cout << "Your body fat is: " << body_fat << endl;
        cout << "Your body fat percentage is: " << body_fat_percentage << endl;

    } else if (gender == 'F' || gender == 'f') {
        cout << "You are a female." << endl;
        float waist_measurement;
        float hip_measurement;
        float forearm_measurement;

        cout << "Enter your body weight: ";
        cin >> body_weight;
        cout << endl;

        cout << "Enter your waist measurement: ";
        cin >> waist_measurement;
        cout << endl;

        cout << "Enter your hip measurement: ";
        cin >> hip_measurement;
        cout << endl;

        cout << "Enter your forearm measurement: ";
        cin >> forearm_measurement;
        cout << endl;

        float a1 = (body_weight * 0.732) + 8.987;
        float a2 = wrist_measurement/3.140;
        float a3 = waist_measurement * 0.157;
        float a4 = hip_measurement * 0.249;
        float a5 = forearm_measurement * 0.434;
        b =  a1 + a2 - a3 - a4 + a5;
        body_fat =  body_weight - b;
        body_fat_percentage = (body_fat * 100 )/ body_weight;

        cout << "Your body fat is: " << body_fat << endl;
        cout << "Your body fat percentage is: " << body_fat_percentage << endl;
    }else {
        cout << "Invalid input." << endl;
    }

    return 0;
}