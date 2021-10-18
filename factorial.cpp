// Вычислить n!

#include <iostream>
using namespace std;

int main()
{
    int n, fac = 1;

    printf("Enter the number: " );
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }

    printf("The factorial of %d is %d", n, fac);

    return 0;
}