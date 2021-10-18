
// Проверить, есть ли в числе цифра 7 
#include <iostream>
using namespace std;

int main()
{
    int n, m, ost;

    printf("Enter the number: ");
    scanf_s("%d", &n);
    m = n;

    while (m > 0)
    {
        ost = m % 10;

        if (ost == 7)
            break;

        m /= 10;
    }

    if (ost == 7)
        printf("Number %d contains 7", n);
    else
        printf("Number %d does not contains 7", n);

    return 0;
}