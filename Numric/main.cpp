#include <iostream>
#include <Windows.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define tab "\t"

//#define SDVIG_PRAVO
//#define DEC_BIN
void main()
{
	setlocale(LC_ALL, "");
	//for (int i = 0; i < 256; i++) cout << i << "\t" << (char)i << endl; 

#ifdef SDVIG_PRAVO
	// ������ ����� �����
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	// ����� ������� �� ����� 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	// ����� ������ 
	int sdvg;
	cout << "������� ���������� ������: "; cin >> sdvg;
	for (int i = 0; i < sdvg; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)	// ��� 2 ???
		{
			arr[i + 1] = arr[i];

		}
		arr[0] = buffer;
	}

	// ����� ������ 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // SDVIG_PRAVO



	// ������� � �������� 
	
	int decimal;
	cout << "������� ���������� �����: "; cin >> decimal;
	
#ifdef DEC_BIN
	
	const int n = 32;	// ������������ ����������� ����� ���� int; 
	bool bin[n] = {};  // bin - ���� ������ ����� ������� ������� (����) ��������� �����

	cout << bin << endl;
	int i = 0;
	while (decimal)  // ������ ��� decimal - �������� � ����, ���� �����������
	{
		bin[i++] = decimal % 2;
		decimal /= 2;
	}
	//for (; decimal; decimal / 2)
		//bin[i++] = decimal % 2; 

	for (--i; i >= 0; i--) // (int i=0; i>=0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0) cout << " ";
		if (i % 4 == 0) cout << " ";
	}
	cout << endl;

#endif // DEC_BIN

	// ������� 2; 
	/*int i, ch2, s[n];
	ch2 = ch;
	for (i = 0; i < n; i++)
		s[i] = 0;
	for (i = 0; ch != 0; i++) {
		s[i] = abs(ch) % 2; //�������� �������� ������� s ����������� 1 ��� 0
		ch = abs(ch) / 2;
	}
	if (ch2 < 0) {
		for (i = n - 1; i >= 0; i--)
			if (s[i] == 1)
				s[i] = 0;
			else
				s[i] = 1;
	}
	for (i = 0; i < n; i++)
		if (s[i] == 1) s[i] = 0;
		else {
			s[i] = 1;
			break;
		}
}
cout << L"�������� ������������� :" << endl;
for (i = n - 1; i >= 0; i--) //���� ������ ������� � ��������� ������
cout << s[i]; //�������������� � �������� ������� ���������
}
		
	//while (n != 0) // ��� ����� 
	//{
		//rem = n % 2;
		//n /= 2;
		//bin += rem * i;
		//i *= 10;
	//}*/

	// ������� � 16-��� ������� ���������

	const int n = 8;  // 8 ������ ��� ��������� ��� � 4 ���� 32/4
	char hex[n] = {};  // ���������� int 
	int i = 0;
	for (; decimal; decimal/=16, i++)
	{
		hex[i] = decimal % 16; 
		//hex[i++] = decimal % 16 + (decimal % 16 < 10 ? 48 : 55);
		hex[i] += hex[i] < 10 ? 48 : 55; 
	}
	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])
		{
		case 10: cout << 'A'; break;
		case 11: cout << 'B'; break;
		case 12: cout << 'C'; break;
		case 13: cout << 'D'; break;
		case 14: cout << 'E'; break;
		case 15: cout << 'F'; break;
		default:cout << hex[i];
		}
		*/
		cout << hex[i]; 
		//cout << char (hex[i] < 10 ?  hex[i]+48 : hex[i] + 55); 
		//(hex[i] < 10) ? cout << hex[i] : cout << char (hex[i] + 55); 
		//if (hex[i] < 10)cout << hex[i]; else cout << char (hex[i] + 55); 
	}
		
	cout << endl; 



}







	

