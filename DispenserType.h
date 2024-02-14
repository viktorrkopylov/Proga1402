#pragma once

#include <iostream>

class DispenserType {
private:
	int numOfItems;
	int cost;

public:
	DispenserType();
		
	DispenserType(int cost, int numOfItems);

	int GetNumOfItems();

	int GetCost();

	void MakeSale();

};