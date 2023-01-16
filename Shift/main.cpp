#include <iostream>


using namespace std;

#define tab "\t"
//#define SDVIG
void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	// вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl; 

	// сдвиг массива
	

	// вывод сдвинутого массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;










#ifdef SDVIG
	int a[n], k, tmp;					// k - сдвиг 

	//¬вод массива
	
	for (int i = 0; i < n; i++)
	{
		cout << "¬ведите элементы массива :";
		cout << " " << i << " element: ";
		cin >> a[i];
	}
	cout << "—двиг на число: "; cin >> k;
	
	// ѕерестановка
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
	cout << "–езультат: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
#endif // SDVIG




}