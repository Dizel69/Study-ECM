// Сдвиг массива вправо на 1 элемент 

#include <iostream>
using namespace std;

const int n = 5;

int main()
{
	
	int arr[n] = { 9, 3, 7, 4, 2 };

	int last = arr[n - 1];

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	for (int i = n - 1; i > 0; i--)
		arr[i] = arr[i - 1];
	arr[0] = last;

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}