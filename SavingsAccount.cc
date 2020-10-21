// Scott Enzinna
// Homework Number 6
#include "SavingsAccount.h"
#include <iostream>

SavingsAccount::SavingsAccount(double initialBalance, double interestRate) : Account(initialBalance)
{
    interest = interestRate;
}

double SavingsAccount::getInterest()
{
    return interest;
}

double SavingsAccount::calculateInterest()
{
    return Account::getBalance() * SavingsAccount::getInterest();
}