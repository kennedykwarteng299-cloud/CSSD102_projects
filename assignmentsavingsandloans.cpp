#include <iostream>
#include <iomanip>
using namespace std;

void depositMoney(double &balance);
void withdrawMoney(double &balance);
bool returntomenuorexit();
void requestloan(double &balance);

void printMainMenu() {
    cout << "--------------------------------------\n";
    cout << "Welcome to Savings and Loans Program \n";
    cout << "--------------------------------------\n";
    cout << "Choose one of the following options:\n";
    cout << "1. Deposit money\n";
    cout << "2. Withdraw money\n";
    cout << "3. Check your balance\n";
    cout << "4. Request for a loan\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    double balance = 0.00;
    char choice1;
    bool running = true;

    while (running) {
        printMainMenu();
          cin >> choice1;

        switch (choice1) {
            case '1':
                depositMoney(balance);
                running = returntomenuorexit();
                break;
            case '2':
                withdrawMoney(balance);
                running = returntomenuorexit();
                break;
            case '3':
                cout << "------------------------------------------\n";
                cout << "Your current balance is: $" << fixed << setprecision(2) << balance << '\n';
                cout << "------------------------------------------\n";
                running = returntomenuorexit();
                break;
            case '4':
                requestloan(balance);
                running = returntomenuorexit();
                break;
            case '5':
                cout << "Exiting the program. Goodbye!\n";
                running = false;
                break;
            default:
                cout << "Invalid choice. Please choose correctly.\n";
                break;
        }
    }

    return 0;
}

bool returntomenuorexit() {
    char choice2;
    cout << "Press 1 to go back to the main menu or 0 to exit \n";
    cout << "NOTE***: Any other entry automatically closes the program: \n";
    cin >> choice2;

    switch (choice2) {
        case '0':
            cout << "See you again next time!, Goodbye.\n";
            return false;
        case '1':
            return true;
        default:
            cout << "Exiting the program...Goodbye!\n";
            return false;
    }
}

void depositMoney(double &balance) {
    double amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "-------------------------------------------------\n";
        cout << "You Deposited: $" << fixed << setprecision(2) << amount << '\n';
        cout << "Your new balance is: $" << fixed << setprecision(2) << balance << '\n';
        cout << "-------------------------------------------------\n";
    } else {
        cout << "You cannot enter deposit a negative number";
    }
}

void withdrawMoney(double &balance) {
    double withdrawalamount;

    cout << "Enter amount to wihdraw: ";
    cin >> withdrawalamount;
    cout << "----------------------------------------------------------\n";
    cout << "Processing...\n";

    if (balance >= withdrawalamount) {
        balance -= withdrawalamount;
        cout << "Here is your requested funds\n";
        cout << "Your new balance is: " << fixed << setprecision(2) << balance << '\n';
    } else {
        cout << "Not enough funds. Deposit more to withdraw or take a loan\n";
    }

    cout << "----------------------------------------------------------\n";
}

void requestloan(double &balance) {
    char choice3;

    cout << "Enter amount for loan\n";
    cout << "***NOTE: every loan is repaid with a 20% interest\n";
    cout << "1.$100.00 ...Repay $120.00\n";
    cout << "2.$200.00 ...Repay $240.00\n";
    cout << "3.$500.00 ...Repay $600.00\n";
    cout << "4.$1000.00 ...Repay $1,200.00\n";
    cout << "5.$2000.00 ...Repay $2,400.00\n";
    cout << "Please enter your choice: ";

    cin >> choice3;
    cout << "----------------------------------\n";
    cout << "Processing...\n";

    switch (choice3) {
        case '1':
            cout << "You took a loan of $100.00\n";
            balance -= 120.0; 
            cout << "Your new balance is: $" << fixed << setprecision(2) << balance << '\n';
            break;

        case '2':
            cout << "You took a loan of $200.00\n";
            balance -= 240.0;
            cout << "Your new balance is: $" << fixed << setprecision(2) << balance << '\n';
            break;

        case '3':
            cout << "You took a loan of $500.00\n";
            balance -= 600.0;
            cout << "Your new balance is: $" << fixed << setprecision(2) << balance << '\n';
            break;

        case '4':
            cout << "You took a loan of $1,000.00\n";
            balance -= 1200.0;
            cout << "Your new balance is: $" << fixed << setprecision(2) << balance << '\n';
            break;

        case '5':
            cout << "You took a loan of $2,000.00\n";
            balance -= 2400.0;
            cout << "Your new balance is: $" << fixed << setprecision(2) << balance << '\n';
            break;

        default:
            cout << "invalid choice ";
            break;
    }

    cout << "----------------------------------\n";
}

