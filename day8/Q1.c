#include<stdio.h>>

int main(){
	int a;
	int b;
	printf("enter number a=");
	scanf("%d",&a);
	printf("enter number b=");
	scanf("%d",&b);
	
	if(a<b){
		printf("a is minimum");
	}
	else if(b<a){
		printf("b is minimum");
	}
	else{
		printf("a is equal to b");
	}
	return 0;
}
