// Вычислить сумму простых чисел последовательности 


#include <iostream>
using namespace std;

const int n = 5;

int main()
{
	int arr[n], sum = 0, flag;

	for (int i = 0; i < n; i++)
	{
		printf("Enter %d number: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 1)
		{
			flag = 1;
			for (int k = 2; k < arr[i]; k++)
			{
				if (arr[i] % k == 0)
				{
					flag = 0;
					break;
				}
			}

			if (flag == 1)
				sum += arr[i];
		}
	}

	if (sum != 0)
		printf("Sum = %d", sum);
	else
		printf("No primes found");

	return 0;
}