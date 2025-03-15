#include <iostream>
using namespace std;

/*
2)	The cost of renting a room at a hotel is, say $100.00 per night. For special occasions, such as a wedding or conference, 
the hotel offers a special discount as follows: If the number of rooms booked is at least 10, the discount is 10%; at least 20, 
the discount is 20%; and at least 30, the discount is 30%. Also if rooms are booked for at least three days, 
then there is an additional 5% discount. Write a program that prompts the user to enter the cost of renting one room, 
the number of rooms booked, the number of days the rooms are booked, and the sales tax (as a percent).

The program outputs the cost of renting one room, the discount on each room as a percent, the number of rooms booked, 
the number of days the rooms are booked, the total cost of the rooms, the sales tax, and the total billing amount. 

Your program must use appropriate named constants to store special values such as various discounts.
*/

int main() {
    const int initial_cost = 100;
    int rooms_booked;
    int days_booked;
    double sales_tax;

    float discount_sum = 0;
    float adjusted_cost;
    float no_discount_cost;
    float discount_rooms;
    float discount_days;
    float cost_per_room_post;
    float total_cost;

    cout << "Enter the number of rooms booked: ";
    cin >> rooms_booked;
    cout << endl;

    cout << "Enter the number of days the rooms are booked: ";
    cin >> days_booked;
    cout << endl;

    cout << "Enter the sales tax: ";
    cin >> sales_tax;
    cout << endl;

    adjusted_cost = initial_cost * days_booked * rooms_booked;
    no_discount_cost = (initial_cost * days_booked) * rooms_booked;

    if ((rooms_booked >= 10) & (rooms_booked < 20)) {
        discount_rooms = 0.10 * adjusted_cost;
        adjusted_cost -= discount_rooms;
        discount_sum += 10;
    } else if ((rooms_booked >= 20) & (rooms_booked < 30)) {
        discount_rooms = 0.20 * adjusted_cost;
        adjusted_cost -= discount_rooms;
        discount_sum += 20;
    } else if (rooms_booked >= 30) {
        discount_rooms = 0.30 * adjusted_cost;
        adjusted_cost -= discount_rooms;
        discount_sum += 30;
    }

    if (days_booked >= 3) {
        discount_days = 0.05 * adjusted_cost;
        adjusted_cost -= discount_days;
        discount_sum += 5;
    }

    cost_per_room_post = adjusted_cost / rooms_booked;

    total_cost = adjusted_cost + (adjusted_cost * (sales_tax/100));

    cout << "The cost of renting one room is: $" << cost_per_room_post << endl;
    cout << "The discount on each room is: " << discount_sum / 100 << "%" << endl;
    cout << "The total discount is: " << discount_sum << "%" << endl;
    cout << "The number of rooms booked is: " << rooms_booked << endl;
    cout << "The number of days the rooms are booked is: " << days_booked << endl;
    cout << "The total cost of the rooms is: $" << adjusted_cost << endl;
    cout << "The sales tax is: " << sales_tax << "%" << endl;
    cout << "The total billing amount is: $" << total_cost << endl;


    return 0;
}