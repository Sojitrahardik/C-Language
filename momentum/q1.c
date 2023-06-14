#include<stdio.h>

int main(){
	
	int a;
	
	printf("enter the number:");
	scanf("%d",&a);
	
	a%2==0 ? printf("the input is even") : printf("the input is odd");
	
	return 0;
	
}

