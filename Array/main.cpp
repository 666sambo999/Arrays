#include <iostream>


using namespace std;
using std::cout;
using std::cin;

//#define MIN_MAX_VAR1

void main()
{
	setlocale(LC_ALL, "");
	//const int SIZE = 5; // можно вместо SIZE поставть n 
	//int arr[SIZE];
	const int n = 5;
	int arr[n] = { 3,5,8 };
	//arr[2] = 123; // обращние к элементу массива на запись 
	//cout << arr[2] << endl; // обращение к элементу массива на чтение 
	// SIZE-1; так как нумеруются с нуля. 
	// n-1;

	// ввод элементов массива с клавиатуры 
	cout << "Введите элементов массива (" << n << " шт.):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];	// обращаемся к элементу массива на чтение 
	}

	// вывод массива на экран 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// Вывод массива на экран в обраном порядке: 
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// вычесления суммы элементов массива 
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Средне-арифметическое элементов массива: " << (double)sum / n << endl;

	// поиск максимального и минимального значения в массиве
	// 1 вариант 
#ifdef MIN_MAX_VAR1
	int min, max = arr[0]; //  проинициалтизировать из области допустимых значений из массива, нулевым элементом (0) 
	for (int i = 0; i < n; i++) // arr - элемент массива 
	{
		if (arr[i] < min) arr[i] = min; // i - номер элемента массива, 
		// arr[i] - это значение элемента 
		if (arr[i] > max) arr[i] = max;
	}
	cout << "Минимальное значение: " << endl;
	cout << "Максимальное значение: " << endl;
#endif // MIN_MAX_VAR1
	
		
	// 2 вариант 
	int min = INT_MAX, max = INT_MIN; // INT MIN - макросы студии 
	for (int i : arr)
	{
		if (i < min)
		{
			min = i;
		}

		if (i > max)
		{
			max = i;
		}
	}
	cout << "Минимальный элемент: " << min << endl;
	cout << "Максимальный элемент: " << max << endl;

	
	// 3 вариант 
	int mass[n], max, min;
	cout << "Элементы: |";
	for (int r = 0; r < n; r++)
	{
		mass[r] = rand() % 99;
		cout << mass[r] << "|";
	}
	cout << endl;

	max = mass[0];
	min = mass[0];
	for (int r = 1; r < n; r++)
	{
		if (max < mass[r]) max = mass[r];
		if (min > mass[r]) min = mass[r];
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

	// 3 вариант 



}