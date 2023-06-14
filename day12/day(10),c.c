#include <stdio.h>

int main() {
    int N, i;
    
    printf("Enter a number: ");
    scanf("%d", &N);
    
    printf("Multiplication Table of %d:\n", N);
    
    i = 1;
    do
     {
        printf("%d x %d = %d\n", N, i, N * i);
        i++;
    }
    while (i <= 10);
    
    return 0;
}

