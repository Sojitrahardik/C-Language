#include<stdio.h>
int main()
{
	int a,b,c;
printf("enter num A:");
scanf("%d",&a);	

printf("enter num B:");
scanf("%d",&b);
printf("enter num C:");
scanf("%d",&c);

a>b ? 
     a>c ?
     printf("a is max")
     :
     	printf("c is max")
: b>c  ?
    printf("b is max")
    :
    	printf("c is max");
	return 0;
}
