#include<stdio.h>

int main()
{
    char a;
	
	printf("Enter the first charcter of the day :");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'm':
			printf("monday");
			break;
			
	 	case 't':
			printf("tuesday");
			break;		
			
    	case'w':
			printf("wednesday");
			break;		
	
		case 'T':
			printf("thursday");
			break;	
	
		case 'f':
	        printf("friday");
			break;
			
		case 'S':
			printf("saturday");
			break;
			
		case 's':
			printf("sunday");
			break;	
			
			defaul:
			printf("invaild case");
			break;
		}
			return 0;
		}
