#pragma once
#include <iostream>
#include <string>
using std::string; using std::cin; using std::cout; using std::endl;

class Client {
private:
    string username;
    float checkingBalance;
    float savingsBalance;
public:
    void setUsername(string u);
    void setCheckingBalance(float cb);
    void setSavingsBalance(float sb);
    const string getUsername();
    const float getCheckingBalance();
    const float getSavingsBalance();
    Client(string u = "", float cb = 0, float sb = 0);
};