#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

# define tab "\t"
//#define MIN_MAX
//#define UNICUM

void main()
{
	setlocale(LC_ALL, "");


#ifdef MIN_MAX

	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	do
	{

		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Введите максимальное случайное число: "; cin >> maxRand;
		if (maxRand < minRand) cout << "Error Incorrect values" << endl;
	} while (maxRand <= minRand);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // MIN_MAX


	// Уникальное число 
#ifdef UNICUM
	const int n = 10;
	int arr[n];
	int min, max;
	cout << "Введите минимальное значение: "; cin >> min;
	cout << "Введите максимальное значение: "; cin >> max;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (max - min) + min;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}

		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // UNICUM


	// Классная работа

	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		bool unique; // bool = либо 0 или 1;
		do
		{
			arr[i] = rand() % n; // (80 - 70) + 70;
			unique = true; // Предположим что сгенерировалось уникальное случайное число, но это нужо проверить;
			for (int j = 0; j < i; j++) // счетчик j перебирает числа 
			{
				// arr[i] - выбранный элемент 
				// arr[j] - перебираемый элеиент 
				if (arr[i] == arr[j])
				{
					unique = false; 
					break; 
				}

			}
		} while (!unique); 
		
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}



