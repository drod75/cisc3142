#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
   ifstream inFile;
   ofstream outFile;

   inFile.open("inData.txt");
   outFile.open("outData.txt");

   string firstName, lastName, department;

   double pay, bonus, taxes;

   double distance_traveled, time_traveled;

   int cups_sold;
   double cost_cup;

   inFile >> firstName >> lastName >> department;
   inFile >> pay >> bonus >> taxes;
   inFile >> distance_traveled >> time_traveled;
   inFile >> cups_sold >> cost_cup;

   double bonus_amount = pay * (bonus / 100.0);
   double tax_amount = pay * (taxes / 100.0);
   double paycheck = (pay + bonus_amount) - tax_amount;

   double average_speed = distance_traveled / time_traveled;
   double sales_amount = cups_sold * cost_cup;

   outFile << fixed << setprecision(2);
   outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
   outFile << "Monthly Gross Salary: $" << pay << ", Monthly Bonus: " << bonus << "%, Taxes: " << taxes << "%" << endl;
   outFile << "Paycheck: $" << paycheck << endl;
   outFile << "\nDistance Traveled: " << distance_traveled << " miles, Traveling Time: " << time_traveled << " hours" << endl;
   outFile << "Average Speed: " << average_speed << " miles per hour" << endl;
   outFile << "\nNumber of Coffee Cups Sold: " << cups_sold << ", Cost: $" << cost_cup << " per cup" << endl;
   outFile << "Sales Amount: $" << sales_amount << endl;

   inFile.close();
   outFile.close();
}