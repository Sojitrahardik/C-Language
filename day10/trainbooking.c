#include <stdio.h>

int main() {
    int option, num_tickets,a;
    
    printf("Welcome to *RAIL MITRA* Ticket Booking System\n");
    printf("1. Book a ticket\n");
    printf("2. Cancel a ticket\n");
    printf("3. Exit\n");
    
    printf("Enter your choice: ");
    scanf("%d", &option);
    
    switch (option) {
        case 1:
            printf("Enter the number of tickets to book: ");
            scanf("%d", &num_tickets);
            
            switch (num_tickets) {
                case 1 ... 999 :
                    printf("Ticket booked successfully! Enjoy your journey.\n");
                    
                    
                    
                     printf("choose class.\n\n");
                     
                      printf("1: First class AC sleeper .\n");
                      printf("2: Secound class AC sleeper .\n");
                      printf("3: First class Non AC sleeper .\n");
                      printf("4: Secound class Non AC sleeper .\n");
                      printf("5: First class AC .\n");
                      printf("6: general .\n");
                      
                      printf("\n choose class .\n");
                      scanf("%d",a);
                      
                      switch(a)
                      {
                    case 1:
                    printf("1: First class AC sleeper .\n");
                    break;
                      	 	 
                    case 2:
                    printf("2:Secound class AC sleeper .\n");
                    break;
                    
					case 3:  	 	 
                    printf("3: First class Non AC sleeper .\n");
                    break;
                    
                    case 4:
                    printf("4: Secound class Non AC sleeper .\n");
                    break;
                      
                    case 5:
                    printf("5: First class AC .\n");
                    break;
                      
                    case 6:
                    printf("6: general .\n");
                    break;
                      
                    default:
                    printf("Invalid selection.\n");
                    break;
                       	
                                 
			  }
                    break;
                default:
                    printf("Invalid number of tickets.\n");
                    break;
            }
            break;
            
        case 2:
            printf("Enter the number of tickets to cancel: ");
            scanf("%d", &num_tickets);
            
            switch (num_tickets) {
                case 1:
                    printf("Ticket canceled successfully.\n");
                    break;
                case 2:
                    printf("Tickets canceled successfully.\n");
                    break;
                default:
                    printf("Invalid number of tickets.\n");
                    break;
            }
            break;
            
        case 3:
            printf("Exiting the program. Goodbye!\n");
            break;
            
        default:
            printf("Invalid choice.\n");
            break;
    }
    
    return 0;
}
