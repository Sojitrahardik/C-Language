#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	printf("enter A:");
	scanf("%d",&a);
	
	printf("enter B:");
	scanf("%d",&b);
	
	printf("enter C:");
	scanf("%d",&c);
	
	printf("enter D:");
	scanf("%d",&d);

	if(a>b)
        	{ 
			  if(a>c)
			         {
		           if(a>d)
				          {
				          	printf("a is max");
				          }
			else
			{
			printf("d is max");	
			}
		}
		
		 else
		 {
		 	if (c>d)
			 {
		 		printf("c is max");
		 	}
		 		else
				 {
		 			printf("d is max");
				 }
			 }
		}
	
		
		else
		{
		      if(b>c)
			  {
			if(b>d)
					  {
					  	printf("b is max");
						  }
						  else
						  { 
						  printf("d is max");
							  }	
				  }
				  else
				  {
				  	if(c>d)
				  	{
				  		printf("c is max");
					  }
					  else
					  {
					  	printf("d is max");
					  }
					  
	}
		}
  return 0;
}
