#include <iostream>


using namespace std;

#define tab "\t"
//#define SDVIG
void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	// ����� ��������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl; 

	// ����� �������
	

	// ����� ���������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;










#ifdef SDVIG
	int a[n], k, tmp;					// k - ����� 

	//���� �������
	
	for (int i = 0; i < n; i++)
	{
		cout << "������� �������� ������� :";
		cout << " " << i << " element: ";
		cin >> a[i];
	}
	cout << "����� �� �����: "; cin >> k;
	
	// ������������
	for (int i = 0; i < k; i++)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			if (j == n - 1)
				tmp = a[n - 1];
			else
				a[j + 1] = a[j];
		}
		a[0] = tmp;
	}
	cout << "���������: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
#endif // SDVIG




}