#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double liters = 3.78;
    const double cost = 0.38;
    const double profit = 0.27;

    int total_produced;

    cout << "Hello milkman, please output the total amount of milk produced: ";
    cin >> total_produced;
    cout << endl;

    int cartons = static_cast<int>(round(total_produced/liters));
    cout << "Total cartons needed is: " << cartons << endl;

    double totalCost = cartons * cost;
    cout << "The total cost is: " << totalCost << endl;

    double totalProfit = cartons * profit;
    cout << "Total profit: $" << totalProfit << endl;

}
