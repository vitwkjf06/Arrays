#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int array[n] = { 0 }, minRand = 70, maxRand = 80, value = 0;
	for (int i = 0; i < n; i++)
	{
		value = rand() % (maxRand - minRand) + minRand;
		bool check = true;
		for (int j = 0; j < i; j++)
		{
			if (value == array[j])
			{
				check = false;
				i--;
				break;
			}
		}
		if (check)
		{
			array[i] = value;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}