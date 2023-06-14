#include<stdio.h>
int main()
{
	int i = 1;
	int n;
	
	printf("enter your number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		printf("%d\n",i);
	    
	}
	return 0;
}
