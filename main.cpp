#include <iostream>
#include <Windows.h>

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout
		<< "=========================\n"
		<< "\tЗадание 1\n"
		<< "=========================\n\n";

	float distance{}, time{};

	std::cout << "Введите растояние: ";
	std::cin >> distance;
	std::cout << "Введите время: ";
	std::cin >> time;

	float velocity = distance / time;

	std::cout << "Нужно двигаться со скоростью " << velocity << " км/ч\n\n\n";


	std::cout
		<< "=========================\n"
		<< "\tЗадание 2\n"
		<< "=========================\n\n";

	const int size = 3;
	float startTime[size]{}, finishTime[size]{};

	std::cout << "Введите ч:м:с начала поездки: ";
	std::cin >> startTime[0];
	std::cin >> startTime[1];
	std::cin >> startTime[2];
	

	std::cout << "Введите ч:м:с конца поездки: ";
	for (int i = 0; i < size; i++)
	{
		std::cin >> finishTime[i];
	}

	float startTimeInMinutes = startTime[0] / 60 + startTime[1] + startTime[2] / 60;
	float finishTimeInMinutes = finishTime[0] / 60 + finishTime[1] + finishTime[2] / 60;

	std::cout << startTimeInMinutes << '\n' << finishTimeInMinutes;

}