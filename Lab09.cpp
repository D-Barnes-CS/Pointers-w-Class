// Lab09.cpp : 
// 1st pointer calls set
// 2nd pointer to print the values

#include "Client.h"

int main() {
    //default Client object
    Client user; 
    //2 pointers for Client
    Client* ptrs[2];
    //username, checkingsbalance, savingsbalance
    string name; float check; float savings;
    cout << "Lab 0601!\n------------";
    cout << "Enter client's name: "; 
    cin >> name;
    cout << "Enter initial checking balance: ";
    cin >> check;
    while (check < 0.0) {
        cout << "Value must be greater than or equal to 0.0." << endl;
        cout << "Enter initial checking balance: ";
        cin >> check;
    }
    cout << "Enter initial savings balance: ";
    cin >> savings;
    while (savings < 0.0) {
        cout << "Value must be greater than or equal to 0.0." << endl;
        cout << "Enter initial savings balance: ";
        cin >> savings;
    }
    ptrs[0] = &user;
    ptrs[0]->setUsername(name); ptrs[0]->setCheckingBalance(check);
    ptrs[0]->setSavingsBalance(savings);
    ptrs[1] = &user;
    cout << "Client's name: " << ptrs[1]->getUsername() << endl;
    cout << "Checking balance: " << ptrs[1]->getCheckingBalance() << endl;
    cout << "Savings balance: " << ptrs[1]->getSavingsBalance() << endl;
}
