#include <stdio.h>

int main() {
    int N, i;
    
    printf("Enter a number: ");
    scanf("%d", &N);
    
    printf("Multiplication Table of %d:\n", N);
    
    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", N, i, N * i);
        i++;
    }
    
    return 0;
}

