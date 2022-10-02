#include <iostream>
#include <bitset>
#include <Windows.h>
#include <cmath>

using namespace std;

void One()
{
	unsigned int a = rand() % 0xFFFFFFFF;
	cout << "16cc:  " << hex << a << dec << endl << "2��:   " << bitset<32>(a) << endl;
	unsigned int b = 0b00000000000000000000100000101000;
	cout << "�����: " << bitset<32>(b) << endl;
	unsigned int c = a | b;
	cout << "2��:   " << bitset<32>(c) << endl;
}

void Two()
{
	unsigned int a;
	cout << "������� �������� ���������� � 16��: ";
	cin >> hex >> a;
	cout << "2��:   " << bitset<32>(a) << " 10cc: " << dec << a << endl;
	unsigned int b = 0b11111111111111111111111111110000;
	cout << "�����: xxxxxxxxxxxxxxxxxxxxxxxxxxxx" << bitset<4>(b) << endl;
	unsigned int c = a & b;
	cout << "2��:   " << bitset<32>(c) << endl;
}

void Three()
{
	unsigned int a;
	cout << "������� �������� ���������� � 16��: ";
	cin >> hex >> a;
	cout << "2��:   " << bitset<32>(a) << " 10cc: " << dec << a << endl;
	unsigned int b = 7;
	cout << "���������: " << pow(2, b) << " ��� 2^" << b << endl;
	unsigned int c = a<<b;
	cout << "2��:   " << bitset<32>(c) << endl;
	cout << "10��:  " << c << endl;
}

void Four()
{
	unsigned int a;
	cout << "������� �������� ���������� � 16��: ";
	cin >> hex >> a;
	cout << "2��:   " << bitset<32>(a) << " 10cc: " << dec << a << endl;
	unsigned int b = 7;
	cout << "��������: " << pow(2, b) << " ��� 2^" << b << endl;
	unsigned int c = a>>b;
	cout << "2��:   " << bitset<32>(c) << endl;
	cout << "10��:  " << c << endl;
}

void Five()
{
	unsigned int a;
	cout << "������� �������� ���������� � 16��: ";
	cin >> hex >> a;
	cout << "2��:   " << bitset<32>(a) << " 10cc: " << dec << a << endl;
	unsigned int b = 0b00000000000000000000000000000001;
	cout << "�����: " << bitset<32>(b) << endl;
	cout << "���������� ��� 1 � ������� N(�� 0 �� 32): ";
	int n;
	cin >> dec >> n;
	while (n > 31 || n < 0)
	{
		cout << "������! ������� N ������ ������!" << endl;
		cout << "���������� ��� 1 � ������� N(�� 0 �� 32): ";
		cin >> n;
	}
	b = b << n;
	cout << "�����: " << bitset<32>(b) << endl;
	unsigned int c = a | b;
	cout << "2��:   " << bitset<32>(c) << endl;
}






int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	/*cout << "����� 1" << endl;
	One();
	cout << endl << "����� 2" << endl;
	Two();
	cout << endl << "����� 3" << endl;
	Three();
	cout << endl << "����� 4" << endl;
	Four(); */
	cout << endl << "����� 5" << endl;
	Five();
	return 0;
}