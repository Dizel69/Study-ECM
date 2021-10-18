//Находит максимум и минимум в последовательности, оканчивающиеся нулём
//max - максимальное число
//
//min - минимальное число
//
//p - очередное число

#include <iostream>
using namespace std;

int main() {

	int max, min, p;

	printf("Vvedite skediushiy elemen: ");
	scanf_s("%d", &p);
	max = p;
	min = p;

	while (p > 0) {
		if (p > max) 
			max = p;
		if (p < max) 
			min = p;

		printf("Vvedite skediushiy elemen: ");
		scanf_s("%d", &p);

	}

	printf("Max = %d \nMin = %d", max,min);

}
