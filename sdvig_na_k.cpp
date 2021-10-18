// Сдвиг массива влево на k элементов 
#include <iostream>
using namespace std;

const int n = 5;
const int k = 2;

int main()
{
	int arr[n], last;

	for (int i = 0; i < n; i++)
	{
		printf("Enter %d number: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 1; i <= k; i++)
	{
		last = arr[0];
		for (int j = 0; j < n - 1; j++)
			arr[j] = arr[j + 1];
		arr[n - 1] = last;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
