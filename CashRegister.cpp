#include "CashRegister.h"

CashRegister::CashRegister() 
	:cashOnHand(500) {}
CashRegister:: CashRegister(int cashOnHand) 
	:cashOnHand(cashOnHand) {}
CashRegister::~CashRegister() {}
int CashRegister::GetCurrentBalance() { return cashOnHand; }
void CashRegister::AcceptAmount(int moneyIn) {
	std::cout << "������� �������� �������: " << std::endl;
			
	cashOnHand += moneyIn;
}