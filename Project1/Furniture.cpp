#include "Furniture.hpp"
#include <iostream>



void Furniture::GetData()
{

	std::string brand;
	std::string type;
	float price;
	float size_h;
	float size_w;
	bool used;

	std::cout << "Какой бренд вашей мебели?\n";
	std::cin >> brand;

	std::cout << "Какую мебель вы хотите вывести?\n";
	std::cin >> type;

	std::cout << "Какую цену вы хотите присвоить " << type << "?\n";
	std::cin >> price;

	std::cout << "Какая высота у " << type << "?\n";
	std::cin >> size_h;

	std::cout << "Какая ширина у " << type << "?\n";
	std::cin >> size_w;

	std::cout << "Ваша мебель Б/У?\n1-да 0-нет\n";
	std::cin >> used;

	if (used == 0)
	{
		std::cout << "Не использованная";

	}
	else {

		std::cout << "Использованная";


	}

	std::cout << " " << type << "\nБренда: " << brand << "\nСтоимостью: " << price << "\nВысотой: " << size_h << "\nШириной: " << size_w;

}