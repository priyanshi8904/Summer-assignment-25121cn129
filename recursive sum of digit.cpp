#include <stdio.h>

int sumDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = sumDigits(num);

    printf("Sum of digits = %d", sum);

    return 0;
}

