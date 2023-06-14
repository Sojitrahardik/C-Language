#include <stdio.h>

int main() {
    int option, num_tickets;
    
    printf("Train Ticket Booking System\n");
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
                case 1:
                    printf("Ticket booked successfully! Enjoy your journey.\n");
                    break;
                case 2:
                    printf("Tickets booked successfully! Enjoy your journey.\n");
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
