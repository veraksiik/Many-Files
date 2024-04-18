#include <iostream>
//#include <Windows.h>
#include "Furniture.hpp"





int main() {


	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	Furniture a;
	a.GetData();

	system("pause");
	return 0;
}