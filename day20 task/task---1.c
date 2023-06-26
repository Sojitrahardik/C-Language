#include<stdio.h>
int main()
{
	int n=5,i;
	int a[n];
	
	printf("enter value :\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("negative elements :");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
	}
	
	return 0;
}
