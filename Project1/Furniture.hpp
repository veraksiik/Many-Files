#ifndef FURNITURE_HPP
#define FURNITURE_HPP
#include <iostream>


class Furniture
{
public:

	void GetData();

private:
	std::string brand;
	float price;
	std::string type;
	float size_h;
	float size_w;
	bool used;
};

#endif // !FURNITURE.HPP