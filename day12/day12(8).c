#include <stdio.h>

int main() {
    int N, i = 1, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &N);

   while (i <= N)
	{
        factorial = factorial * i;
        i++;
    }
     

    printf("The factorial of %d is: %d\n", N, factorial);

    return 0;
}

