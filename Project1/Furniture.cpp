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

	std::cout << "����� ����� ����� ������?\n";
	std::cin >> brand;

	std::cout << "����� ������ �� ������ �������?\n";
	std::cin >> type;

	std::cout << "����� ���� �� ������ ��������� " << type << "?\n";
	std::cin >> price;

	std::cout << "����� ������ � " << type << "?\n";
	std::cin >> size_h;

	std::cout << "����� ������ � " << type << "?\n";
	std::cin >> size_w;

	std::cout << "���� ������ �/�?\n1-�� 0-���\n";
	std::cin >> used;

	if (used == 0)
	{
		std::cout << "�� ��������������";

	}
	else {

		std::cout << "��������������";


	}

	std::cout << " " << type << "\n������: " << brand << "\n����������: " << price << "\n�������: " << size_h << "\n�������: " << size_w;

}