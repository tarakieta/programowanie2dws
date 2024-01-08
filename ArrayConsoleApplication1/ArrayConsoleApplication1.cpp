#include <iostream>

//Napisz program, kt�ry wczyta 5 liczb a nast�pnie je wy�wietli na konsoli
//w odwrotnej kolejno�ci
void task1()
{
	const int SIZE_OF_ARRAY = 5;
	int numbers[SIZE_OF_ARRAY];

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		std::cout << "Podaj liczbe\n";
		std::cin >> numbers[i];
	}

	for (int i = SIZE_OF_ARRAY - 1; i >= 0; i--)
		std::cout << "Podana liczba " << numbers[i] << "\n";
}

void task2()
{
	const int UPPER_RANGE = 100;
	const int LOWER_RANGE = 5;

	const int SIZE_OF_ARRAY = 5;
	int numbers[SIZE_OF_ARRAY];

	srand(time(NULL));

	for (int i = 0; i < SIZE_OF_ARRAY; i++) 
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	}

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		std::cout << numbers[i] << ", ";
		std::cout << "\n";

		int max = numbers[0];
		for (int i = 0; i < SIZE_OF_ARRAY; i++)
			if (numbers[i] > max)
				max = numbers[i]; 
		
		int min = numbers[0];
		for (int i = 1; i < SIZE_OF_ARRAY; i++)
			min = numbers[i];

		std::cout << "Najwi�ksza to: " << max << "\n";

	}
}

void task3()
{
	const int UPPER_RANGE = 10;
	const int LOWER_RANGE = 5;

	const int SIZE_OF_ARRAY = 3;
	int numbers[SIZE_OF_ARRAY];

	srand(time(NULL));

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	}

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	std::cout << numbers[i] << ", ";
	std::cout << "\n";

	int sum = 0;
	for (int i = 0; i < SIZE_OF_ARRAY; i++) 
	{
		sum = sum + numbers[i];
	}

	double average = sum * 1.0 / SIZE_OF_ARRAY;
	std::cout << "�rednia liczb to: " << average << "\n";
}

task4()
{
	std::cout << "\nWersja 2\n";
}

int main()
{
	//task1();
	//task2();
	task3();
}