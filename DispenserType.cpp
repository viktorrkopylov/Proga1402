#include "DispenserType.h"

DispenserType::DispenserType(){}

DispenserType::DispenserType(int cost, int numOfItems)
		:cost(50), numOfItems(100){}

int DispenserType::GetNumOfItems() {
	return numOfItems;
}
int DispenserType::GetCost()
	{
		std::cout << "���� ������: " << cost << std::endl;
		return cost;
	}
void DispenserType::MakeSale() {
			numOfItems -= 1;
			std::cout << "�������� " << numOfItems << " �������" << std::endl;
		}