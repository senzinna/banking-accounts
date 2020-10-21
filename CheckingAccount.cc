// Scott Enzinna
// Homework Number 6
#include <iostream>
#include "CheckingAccount.h"

using namespace std;

CheckingAccount::CheckingAccount(double initialBalance, double fee) : Account(initialBalance)
{
	transactionFee = fee;
};

void CheckingAccount::credit(double deposit)
{
	Account::setBalance(Account::getBalance() + deposit);
	chargeFee();
}

bool CheckingAccount::debit(double withdraw)
{
	if (withdraw < Account::getBalance())
	{
		Account::setBalance(Account::getBalance() - withdraw);
		chargeFee();
		return true;
	}

	else
	{
		cout << "Insufficient funds\n";
		return false;
	}
}

double CheckingAccount::getFee()
{
	return transactionFee;
}

void CheckingAccount::chargeFee()
{
	Account::setBalance(Account::getBalance() - getFee());
	cout << "Charged a fee of $" << CheckingAccount::getFee() << endl;
}
