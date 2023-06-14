#include<stdio.h>
int main()
{
	
	char A;
	
	printf("Enter the character : ");
	scanf("%c",&A);
	
	switch(A)
{
		
	case 'a':
	printf("january");
	break;
	
	case 'b':
	printf("february");
	break;
	
	case 'c':
	printf("march");
	break;
	
	case 'd':
	printf("april");
	break;
	
	case 'e':
	printf("may");
	break;
	
	case 'f':
	printf("june");
	break;
	
	case 'g':
	printf("july");
	break;
	
	case 'h':
	printf("august");
	break;
	
	case 'i':
	printf("september");
	break;
	
	case 'j':
	printf("october");
	break;
	
	case 'k':
	printf("november");
	break;
	
	case 'l':
	printf("december");
	break;
	
	    default:
		printf("enter valid character :");
		break;	
}
return 0;	
}

