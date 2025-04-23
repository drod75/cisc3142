/*
Implement a simple bank account management system using classes. The class should handle basic operations such as setting the account holder's name, depositing money, withdrawing money, and checking the account balance. The assignment should not involve constructors and should have all member functions defined within the class declaration.
1.	Class Definition:
    o	Create a class named BankAccount that contains:
        	Private member variables:
            	std::string accountHolder: to store the account holder's name.
            	double balance: to store the account balance (initialized to 0).
        	Public member functions:
            	void setAccountHolder(const std::string& name): to set the name of the account holder.
            	void deposit(double amount): to deposit an amount into the account (ensure the amount is positive).
            	void withdraw(double amount): to withdraw an amount from the account (ensure sufficient funds and that the amount is positive).
            	void checkBalance() const: to display the account holder's name and current balance.
2.	Main Program:
    o	In the main function:
        	Prompt the user to enter the account holder's name.
        	Make an initial deposit of a fixed amount (e.g., $1000).
        	Allow the user to:
            	Deposit additional funds.
            	Withdraw funds, ensuring proper checks for sufficient balance.
            	Check the balance after each transaction.
3.	Output Format:
    o	Clearly display the results of each operation, including:
        	Confirmation of deposits and withdrawals.
        	The current balance after each operation.

Example Output

When the program is executed, the expected output format should resemble the following:

Enter account holder's name: John Doe
Initial deposit of $1000. New balance: 1000
Account holder: John Doe, Balance: 1000
Enter amount to deposit: 500
500 deposited. New balance: 1500
Account holder: John Doe, Balance: 1500
Enter amount to withdraw: 200
200 withdrawn. New balance: 1300
Account holder: John Doe, Balance: 1300
*/
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

class BankAccount {
    private:
        string accountHolder;
        double balance;

    public:
        void setAccountHolder(const std::string& name) {
            accountHolder = name;
        }

        void deposit(double amount) {
            if (amount > 0) {
                if (balance == 0){
                    balance += amount;
                    cout << "Initial deposit of $" << fixed << setprecision(0) << amount << ". New Balance: " << balance << endl; 
                    checkBalance();
                }
                else {
                    balance += amount;
                    cout << amount << " deposited. New balance: " << balance << endl;
                    checkBalance();
                }
            } else {
                cout << "Invalid deposit amount. Please enter a positive number." << endl;
            }
        }
    
        void withdraw(double amount) {
            if (amount > 0) {
                if (balance >= amount) {
                    balance -= amount;
                    cout << amount << " withdrawn. New balance: " << balance << endl;
                    checkBalance();
                } else {
                    cout << "Insufficient funds. Current balance: " << balance << endl;
                }
            } else {
                cout << "Invalid withdrawal amount. Please enter a positive number." << endl;
            }
        }

        void checkBalance() const {
            cout << "Account holder: " << accountHolder << ", Balance: " << balance << endl;
        }

        BankAccount(): balance(0.0) {}
};
void options() {
    cout << "\nWelcome, your options for the banking app are: " << endl;
    cout << "Deposit(d)" << endl;
    cout << "Withdraw(w)" << endl;
    cout << "Check Balance(b)" << endl;
    cout << "Options List(o)" << endl;
    cout << "Quit(q)" << endl;
    
}

int main(){
    BankAccount account;
    string accountHolderName;

    cout << "Enter account holder's name: ";
    getline(cin, accountHolderName);
    account.setAccountHolder(accountHolderName);

    // Initial deposit
    double initialDeposit = 1000.0;
    account.deposit(initialDeposit);

    bool checker = false;

    options();
    char option;
    while (!checker)  {
        cout << "\nPlease enter an option: ";
        cin >> option;
        cout << endl;
        switch (option) {
            case 'D':
            case 'd':
                double depositAmount;
                cout << "Enter amount to deposit: ";
                cin >> depositAmount;
                account.deposit(depositAmount);
                break;
            case 'W':
            case 'w':
                double withdrawAmount;
                cout << "Enter amount to withdraw: ";
                cin >> withdrawAmount;
                account.withdraw(withdrawAmount);
                break;
            case 'b': 
            case 'B': {
                account.checkBalance();
                break;
            }
            case 'o':
            case 'O':
                options();
                break;
            case 'Q':
            case 'q':
                cout << "Exiting program." << endl;
                checker = true;
                break;
            default:
                cout << "Invalid choose from appropriate list!" << endl;
                options();
        }

    }

}