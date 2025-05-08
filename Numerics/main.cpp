#include <iostream>
#include <bitset>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int i;
	cout << "Введите десятичное число: "; cin >> i;
        cout << "Двоичное представление: " << bitset<32>(i) << endl;
        cout << "Шестнадцатеричное представление: " << hex << uppercase << i << endl;
}