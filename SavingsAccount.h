// Scott Enzinna
// Homework Number 6
#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h"

class SavingsAccount : public Account
{
public:
	SavingsAccount(double intialBalance, double interest);
	double calculateInterest();
	double getInterest();

private:
	double interest;
};

#endif
