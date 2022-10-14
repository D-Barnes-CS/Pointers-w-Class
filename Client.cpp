#include "Client.h"
void Client::setUsername(string u) {
	username = u;
}

void Client::setCheckingBalance(float cb) {
	checkingBalance = cb;
}

void Client::setSavingsBalance(float sb) {
	savingsBalance = sb;
}

const string Client::getUsername() {
	return username;
}

const float Client::getCheckingBalance() {
	return checkingBalance;
}

const float Client::getSavingsBalance() {
	return savingsBalance;
}

Client::Client(string u, float cb, float sb) {
	setUsername(u); setCheckingBalance(cb); setSavingsBalance(sb);
}