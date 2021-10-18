//На вход дается последовательность. Опеределить Max и Min число.

#include <iostream>
using namespace std;

int main() {
	int max, min, p;

	printf("Vveite pervoe chislo: ");
	scanf_s("%d", &p);
	max = p; min = p;

	while (p != 0) {
		if (p > max) max = p;
		if (p < min) min = p;

		printf("Vveite sleduyushee chislo: ");
		scanf_s("%d", &p);
	}
	
	printf("Max: %d  | Min: %d \n", max, min);
	return 0;

}
