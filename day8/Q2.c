#include<stdio.h>

int main(){
	int a;
	printf("Enter number a=");
	scanf("%d",&a);
	
	if(a>0){
		printf("The number is positive");
	}
	else if(a<0){
		printf("The number is negative");
	}
	else{
		printf("The number is nutral");
	}
	return 0;
}
