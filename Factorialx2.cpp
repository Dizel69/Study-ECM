// Вычислить n!! 

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, fac = 1;

    printf("Enter the number: ");
    scanf_s("%d", &n);

    if (n % 2 == 0) i = 2;

    for (; i <= n; i = i + 2)
    {
        fac = fac * i;
    }

    printf("The double factorial of %d is %d", n, fac);

    return 0;
}