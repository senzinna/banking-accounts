// Scott Enzinna
// Homework Number 6
#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(double initialBalance)
{
	if (initialBalance >= 0.0)
		balance = initialBalance;
	else
	{
		cout << "The initial balance must be greater than 0" << endl;
		balance = 0.0;
	}
}

void Account::credit(double deposit)
{
	balance = balance + deposit;
}

bool Account::debit(double withdraw)
{
	if (balance >= withdraw)
	{
		balance = balance - withdraw;
		return true;
	}
	else
	{
		cout << "Amount is greater than the balance" << endl;
		return false;
	}
}

void Account::setBalance(double difference)
{
	balance = difference;
}

double Account::getBalance()
{
	return balance;
}
