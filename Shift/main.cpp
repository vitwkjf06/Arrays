#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n] = { 0,1,2,3,4 };
	for (int i = 0; i < n; i++)cout << arr[i] << "\t";
	cout << endl;
	cout << endl;
	int temp;
	for (int j = 0; j < n; j++)
	{
		temp = arr[n - 1];
		for (int i = n - 1; i < 0; i--)arr[i] = arr[i - 1];
		arr[0] = temp;
		for (int i = 0; i < n; i++)cout << arr[i] << "\t";
		cout << endl;
	}
}