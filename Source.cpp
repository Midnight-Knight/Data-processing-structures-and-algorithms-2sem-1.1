#include <iostream>
#include <bitset>
#include <Windows.h>
#include <cmath>

using namespace std;

void One()
{
	unsigned int a = rand() % 0xFFFFFFFF;
	cout << "16cc:  " << hex << a << dec << endl << "2сс:   " << bitset<32>(a) << endl;
	unsigned int b = 0b00000000000000000000100000101000;
	cout << "Маска: " << bitset<32>(b) << endl;
	unsigned int c = a | b;
	cout << "2сс:   " << bitset<32>(c) << endl;
}

void Two()
{
	unsigned int a;
	cout << "Введите значение переменной в 16сс: ";
	cin >> hex >> a;
	cout << "2сс:   " << bitset<32>(a) << " 10cc: " << dec << a << endl;
	unsigned int b = 0b11111111111111111111111111110000;
	cout << "Маска: xxxxxxxxxxxxxxxxxxxxxxxxxxxx" << bitset<4>(b) << endl;
	unsigned int c = a & b;
	cout << "2сс:   " << bitset<32>(c) << endl;
}

void Three()
{
	unsigned int a;
	cout << "Введите значение переменной в 16сс: ";
	cin >> hex >> a;
	cout << "2сс:   " << bitset<32>(a) << " 10cc: " << dec << a << endl;
	unsigned int b = 7;
	cout << "Множитель: " << pow(2, b) << " или 2^" << b << endl;
	unsigned int c = a<<b;
	cout << "2сс:   " << bitset<32>(c) << endl;
	cout << "10сс:  " << c << endl;
}

void Four()
{
	unsigned int a;
	cout << "Введите значение переменной в 16сс: ";
	cin >> hex >> a;
	cout << "2сс:   " << bitset<32>(a) << " 10cc: " << dec << a << endl;
	unsigned int b = 7;
	cout << "Делитель: " << pow(2, b) << " или 2^" << b << endl;
	unsigned int c = a>>b;
	cout << "2сс:   " << bitset<32>(c) << endl;
	cout << "10сс:  " << c << endl;
}

void Five()
{
	unsigned int a;
	cout << "Введите значение переменной в 16сс: ";
	cin >> hex >> a;
	cout << "2сс:   " << bitset<32>(a) << " 10cc: " << dec << a << endl;
	unsigned int b = 0b00000000000000000000000000000001;
	cout << "Маска: " << bitset<32>(b) << endl;
	cout << "Установить бит 1 в разряде N(от 0 до 32): ";
	int n;
	cin >> dec >> n;
	while (n > 31 || n < 0)
	{
		cout << "Ошибка! Введите N разряд заново!" << endl;
		cout << "Установить бит 1 в разряде N(от 0 до 32): ";
		cin >> n;
	}
	b = b << n;
	cout << "Маска: " << bitset<32>(b) << endl;
	unsigned int c = a | b;
	cout << "2сс:   " << bitset<32>(c) << endl;
}






int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	/*cout << "Номер 1" << endl;
	One();
	cout << endl << "Номер 2" << endl;
	Two();
	cout << endl << "Номер 3" << endl;
	Three();
	cout << endl << "Номер 4" << endl;
	Four(); */
	cout << endl << "Номер 5" << endl;
	Five();
	return 0;
}