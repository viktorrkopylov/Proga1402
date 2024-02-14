
void ShowSelections() {
	std::cout << "В нашем автомате:\n1. Конфеты\n2. Чипсы\n3. Жвачка\n4. Печенье\nЧто вы хотите выбрать? (нажмите оределенную цифру для выбора)\n\n0. Отмена" << std::endl;
}
int SellProduct(DispenserType& product, CashRegister& pCounter) {                                  //чтобы работать с каждым товаром и счетчиком  поотдельности
	int moneyin;
	if (product.GetNumOfItems() > 0) {

		product.GetCost();
		std::cout << "Введите значение платежа: \n" << std::endl;
		std::cin >> moneyin;

		if (moneyin < product.GetCost()) {
			std::cout << "Вы внесли недостаточно денег.\n" << std::endl;
			return 0;
		}
		if (moneyin > product.GetCost()) {
			std::cout << "Заберите товары и сдачу\n" << std::endl;
		}
		else {
			pCounter.AcceptAmount(moneyin);

			product.MakeSale();

			std::cout << "Заберите товары.\n" << std::endl;
		}

	}
	else {
		std::cout << "Данного товара нет в наличии.\n" << std::endl;
	}

}

int main() {
	setlocale(LC_ALL, "Rus");
	CashRegister counter;	
	DispenserType sweet(50, 100);
	DispenserType cookie(50, 100);
	DispenserType gum(50, 100);
	DispenserType chips(50, 100);


	int answer;
	ShowSelections();
	std::cin >> answer;
	while (answer != 0) {
		switch (answer) {
		case 1:
			SellProduct(sweet, counter);
			break;
		case 2:
			SellProduct(chips, counter);
			break;
		case 3:
			SellProduct(gum, counter);
			break;
		case 4:
			SellProduct(cookie, counter);
			break;
		default:
			std::cout << "Некорректно." << std::endl;
		}
		ShowSelections();
		std::cin >> answer;

	}
	return 0;
}

