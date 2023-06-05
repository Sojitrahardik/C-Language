#include<stdio.h>

int main(){
	
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);
	
	printf("enter b:");
	scanf("%d",&b);
	
	printf("enter c:");
	scanf("%d",&c);
	
	if(a>b){
		
		if(b>c){
			printf("c is min");
		}
		else{
			printf("b is min");
		}
	}
	else{
		if(a>c){
			printf("c is min");
		}
		else{
			printf("a is min");
		}
	}
	return 0;
}
