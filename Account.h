// Scott Enzinna
// Homework Number 6
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(double initialBalance);
	void credit(double deposit);
	bool debit(double withdraw);
	void setBalance(double difference);
	double getBalance();

private:
	double balance;
};

#endif
