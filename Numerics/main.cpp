#include <iostream>
#include <bitset>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int i;
	cout << "������� ���������� �����: "; cin >> i;
        cout << "�������� �������������: " << bitset<32>(i) << endl;
        cout << "����������������� �������������: " << hex << uppercase << i << endl;
}