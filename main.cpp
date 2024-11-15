#include <iostream>
#include <Windows.h>

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout
		<< "=========================\n"
		<< "\t������� 1\n"
		<< "=========================\n\n";

	float distance{}, time{};

	std::cout << "������� ���������: ";
	std::cin >> distance;
	std::cout << "������� �����: ";
	std::cin >> time;

	float velocity = distance / time;

	std::cout << "����� ��������� �� ��������� " << velocity << " ��/�\n\n\n";


	std::cout
		<< "=========================\n"
		<< "\t������� 2\n"
		<< "=========================\n\n";

	const int size = 3;
	float startTime[size]{}, finishTime[size]{};

	std::cout << "������� �:�:� ������ �������: ";
	std::cin >> startTime[0];
	std::cin >> startTime[1];
	std::cin >> startTime[2];
	

	std::cout << "������� �:�:� ����� �������: ";
	for (int i = 0; i < size; i++)
	{
		std::cin >> finishTime[i];
	}

	float startTimeInMinutes = startTime[0] / 60 + startTime[1] + startTime[2] / 60;
	float finishTimeInMinutes = finishTime[0] / 60 + finishTime[1] + finishTime[2] / 60;

	std::cout << startTimeInMinutes << '\n' << finishTimeInMinutes;

}