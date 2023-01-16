#include <iostream>


using namespace std;
using std::cout;
using std::cin;

//#define MIN_MAX_VAR1

void main()
{
	setlocale(LC_ALL, "");
	//const int SIZE = 5; // ����� ������ SIZE �������� n 
	//int arr[SIZE];
	const int n = 5;
	int arr[n] = { 3,5,8 };
	//arr[2] = 123; // �������� � �������� ������� �� ������ 
	//cout << arr[2] << endl; // ��������� � �������� ������� �� ������ 
	// SIZE-1; ��� ��� ���������� � ����. 
	// n-1;

	// ���� ��������� ������� � ���������� 
	cout << "������� ��������� ������� (" << n << " ��.):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];	// ���������� � �������� ������� �� ������ 
	}

	// ����� ������� �� ����� 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// ����� ������� �� ����� � ������� �������: 
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// ���������� ����� ��������� ������� 
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������-�������������� ��������� �������: " << (double)sum / n << endl;

	// ����� ������������� � ������������ �������� � �������
	// 1 ������� 
#ifdef MIN_MAX_VAR1
	int min, max = arr[0]; //  �������������������� �� ������� ���������� �������� �� �������, ������� ��������� (0) 
	for (int i = 0; i < n; i++) // arr - ������� ������� 
	{
		if (arr[i] < min) arr[i] = min; // i - ����� �������� �������, 
		// arr[i] - ��� �������� �������� 
		if (arr[i] > max) arr[i] = max;
	}
	cout << "����������� ��������: " << endl;
	cout << "������������ ��������: " << endl;
#endif // MIN_MAX_VAR1
	
		
	// 2 ������� 
	int min = INT_MAX, max = INT_MIN; // INT MIN - ������� ������ 
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
	cout << "����������� �������: " << min << endl;
	cout << "������������ �������: " << max << endl;

	
	// 3 ������� 
	int mass[n], max, min;
	cout << "��������: |";
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

	// 3 ������� 



}