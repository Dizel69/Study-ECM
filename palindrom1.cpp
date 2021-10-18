//На вход даётся число. Определить, является оно палиндромом или нет.

#include <iostream>
using namespace std;

int main() {
	
	int n, m, p;
	printf("Vvedite chislo \n");
	scanf_s("%d", &n);

	p = n; m = 0;

	while (n > 0) {
		m = m * 10 + (n % 10);
		n = n / 10;
	}

	if (m == p)
		printf("Palindrom");
	else
		printf("Ne Palindrom");

	return 0;

}