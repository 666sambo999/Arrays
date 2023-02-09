#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

# define tab "\t"
//#define MIN_MAX
//#define UNICUM
//#define KLASS_PABOTA
//#define SORTIROVKA
void main()
{
	setlocale(LC_ALL, "");


#ifdef MIN_MAX

	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	do
	{

		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
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


	// ���������� ����� 
#ifdef UNICUM
	const int n = 10;
	int arr[n];
	int min, max;
	cout << "������� ����������� ��������: "; cin >> min;
	cout << "������� ������������ ��������: "; cin >> max;

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


	// �������� ������ - ���������� ����� ; 

#ifdef KLASS_PABOTA
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		bool unique; // bool = ���� 0 ��� 1;
		do  // ������ ��� ���� ����� �� ���������  
		{
			arr[i] = rand() % n; // (80 - 70) + 70;
			unique = true; // ����������� ��� ��������������� ���������� ��������� �����, �� ��� ����� ���������;
			for (int j = 0; j < i; j++) // ������� j ���������� ����� 
			{
				// arr[i] - ��������� ������� 
				// arr[j] - ������������ ������� 
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
#endif // KLASS_PABOTA


	// ���������� + ���������� ������� 

#ifdef SORTIROVKA
	const int n = 10;
	int arr[n];
	int minRand, maxRand;
	do
	{

		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
		if (maxRand < minRand) cout << "Error Incorrect values" << endl;
	} while (maxRand <= minRand);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	// ����� ��������� �������: 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	// ���������� �������: 

	for (int i = 0; i < n; i++) // i  ��������� 
	{
		for (int j = i + 1; j < n; j++) // j -������������
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];  // ����������� ������� i 
				arr[j] = arr[i]; // ������ ������� 
				arr[j] = buffer;
			}

		}

	}

	// ����� ���������������� �������:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;





#endif // SORTIROVKA

	// ������ � �������������� ����������

	const int n = 10;
	int arr[n];

	int min, max;
	cout << "������� ����������� ��������� �����: "; cin >> min;
	cout << "������� ������������ ��������� �����: "; cin >> max;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (max - min) + min;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//// ������
	cout << "������������� �������� �������: " << endl; 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n-1; j++)
		{
			if (arr[j] == arr[i])
			{
				cout << arr[i] << tab; 
			}
			
		}
		
	}
	cout << endl; 
	
	// ���������� ���������� 
	cout << "���������� ��������� ������� ��������: " << endl; 
	for (int i = 0; i < n; i++)
	{
		cout << "����� " << arr[i] << " ����������� " << j << " ���" << endl;
	}
	cout << endl;
	

	//----------------------------------------------------------/
	
	//������� �2;
	/*int Mas[n];
	int k = 0;
	int Mas2[n];
	
	for (int j = 0; j < n; j++)
	{
		Mas[j] = rand() % (max-min) + min;
		for (int i = 0; i < n; i++)
		{
			if (Mas[i] == Mas[j])
				k++;
		}
		Mas2[j] = k;
		k = 0;
	}
	cout << endl; 
	for (int i = 0; i < n; i++)
	{
		cout << Mas[i] << '\t' << Mas2[i] << endl;
	}*/


}



