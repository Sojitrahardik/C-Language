#include<stdio.h>
int main()
{
	int i = 1;
	int n;
	
	printf("enter your number :");
	scanf("%d",&n);
	
	for(i=1;n>=1;n--)
	{
		if(n%2==0)
		printf("%d\n",n);
	    
	}
	return 0;
}
