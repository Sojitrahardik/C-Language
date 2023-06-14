#include<stdio.h>
int main()
{
	int i = 1;
	int n,fact=0;
	
	printf("enter the number :");
	scanf("%d",&n);
	
while(i<=n)
	{
		fact=fact*n;
		n--;
	}
		
		printf("%d\n",fact);
	return 0;
}
