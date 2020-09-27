//Пифагорова тройка
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	int  x, y, z, counter = 0; //элементы последовательности

	std::cout << "Вводите элементы последовательности для нахождения Пифагоровых троек: " << std::endl;
	std::cout << "Ноль - конец окончания ввода последовательности." << std::endl;

	std::cin >> x;
	if (std::cin.good() && x != 0 && x != '\n')
	{
		std::cin >> y;
		if (std::cin.good() && y != 0 && y != '\n')
		{
			std::cin >> z;
			if (std::cin.good() && z != 0 && z != '\n')
			{
			}
			else
			{
				std::cerr << "Некорректный ввод!" << std::endl;
				return 1;
			}
		}
		else
		{
			std::cerr << "Некорректный ввод!" << std::endl;
			return 1;
		}
	}
	else
	{
		std::cerr << "Некорректный ввод!" << std::endl;
		return 1;
	}

	if (x * x + y * y == z * z)
	{
		counter++;
	}
	while (true) {
		x = y;
		y = z;
		std::cin >> z;
		if (!std::cin.good())
		{
			std::cerr << "Некорректный ввод!" << std::endl;
			return 1;
		}
		if (z == 0)
		{
			break;
		}
		if (x * x + y * y == z * z)
		{
			counter++;
		}
	}
	std::cout << std::endl << "Всего пифагоровых троек: " << counter << std::endl;

	return 0;
}