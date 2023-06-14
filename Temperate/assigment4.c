#include <stdio.h>

int main()
 {
    int number, firstDigit, lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (firstDigit = number; firstDigit >= 10; firstDigit /= 10);

    lastDigit = number % 10;

    sum = firstDigit + lastDigit;

    printf("Sum of first and last digit: %d\n", sum);

    return 0;
 }

