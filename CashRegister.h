#pragma once
#include <iostream>
class CashRegister {
private:
	int cashOnHand;
public:
	CashRegister();

	CashRegister(int cashonhand);


	~CashRegister();

	int GetCurrentBalance();

	void AcceptAmount(int moneyin);
};