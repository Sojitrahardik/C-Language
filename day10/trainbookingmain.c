#include <stdio.h>

void book_seat(int coach, int seat) {
    /*
    This function takes the coach number and seat number as arguments and books the seat.
    
    Parameters:
    coach (int): The coach number
    seat (int): The seat number
    
    Returns:
    None
    */
    switch(coach) {
        case 1:
            switch(seat) {
                case 1:
                case 2:
                case 3:
                case 4:
                    printf("Seat %d in Coach %d has been booked\n", seat, coach);
                    break;
                default:
                    printf("Invalid seat number for Coach %d\n", coach);
                    break;
            }
            break;
        case 2:
            switch(seat) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                    printf("Seat %d in Coach %d has been booked\n", seat, coach);
                    break;
                default:
                    printf("Invalid seat number for Coach %d\n", coach);
                    break;
            }
            break;
        case 3:
            switch(seat) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                    printf("Seat %d in Coach %d has been booked\n", seat, coach);
                    break;
                default:
                    printf("Invalid seat number for Coach %d\n", coach);
                    break;
            }
            break;
        default:
            printf("Invalid coach number\n");
            break;
    }
}

int main() {
    // Book a seat in Coach 1, Seat 3
    book_seat(1, 3);
    
    // Book a seat in Coach 2, Seat 6
    book_seat(2, 6);
    
    // Book a seat in Coach 3, Seat 7
    book_seat(3, 7);
    
    // Book a seat in Coach 4, Seat 2
    book_seat(4, 2);
    
    return 0;
}
