#include<stdio.h>
int main()
{

int a,b,c,d;

printf("enter A:");
scanf("%d",&a);

printf("enter B:");
scanf("%d",&b);

printf("enter C:");
scanf("%d",&c);

printf("enter D:");
scanf("%d",&d);

a>b
	? a>c
	       	? a>d
	       	       ?
	       	         printf("a is max")	   
			:   
			       printf("d is max")
		    :
	          c>d   ?
	       	        	printf("c is max")		
			:   
			        	printf("d is max")
            :
	  b>c  ?
	        	 b>d  ?     
	        	       	printf("b is max")	   
			    : 
			             printf("d is max")
	             :
	        	 c>d  ?
	        	       	printf("c is max")
				: 
				         printf("d is max");						
return 0;
}
