//№20 Дан целочисленный массив размерности n. Определить является ли
//    последовательность элементов, находящаяся между первым элементом массива,
//    являющегося совершенным числом, и последним элементом массива
//    являющегося совершенным числом, арифметической прогрессией.Выдать
//    сообщение, если в массиве нет такой последовательности.

#include <iostream>
using namespace std;

int* create_arr(int n) {
	return new int[n];
}
void fill_arr(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		scanf_s("%d", arr++);
	}
}
bool n20isperfect(int n) {
	int halfn = n / 2, sum = 0;
	for (int i = 0; i <= halfn; i++) {
		if (!(n % i)) sum += i;
	}

	return sum == n;
}
void find_perfects(int* arr, int n, int& p, int& q) {
	int i;
	for (i = 0; i < n; i++) {
		if (n20isperfect(arr[i])) {
			p = i;
			break;
		}
	}
	for (i = n - 1; i >= 0; i--) {
		if (n20isperfect(arr[i])) {
			q = i;
			break;
		}
	}
}
int check_progression(int* arr, int first, int last) {
	if (last - first <= 2) return -1;
	else {
		int d = arr[first + 2] - arr[first + 1];
		for (int i = first + 2; i < last - 1; i++) {
			if (arr[i + 1] - arr[i] != d) return 0;
		}

		return 1;
	}
}
int main() {
	int n;
	scanf_s("%d", &n);
	int* a = create_arr(n);
	fill_arr(a, n);

	int f = 0, l = 0;
	find_perfects(a, n, f, l);

	int res = check_progression(a, f, l);
	if (!res) printf("not a progression\n");
	else if (res == 1) printf("progression\n");
	else printf("no sequence\n");

}
