#include <stdio.h>

float reservation(char name, int seats);

int x=0,noOfSeats , totalSeatCount, pAvailableSeats = 10, qAvailableSeats = 30, rAvailableSeats = 24, sAvailableSeats = 15;

int main() {


    char repeatProcess = 'y', busName;
    float total;

    while (repeatProcess == 'y' || repeatProcess == 'Y') {
        printf("Bus name\t\tSeats available\n");
        printf("P\t\t%d\n", pAvailableSeats);
        printf("Q\t\t%d\n", qAvailableSeats);
        printf("R\t\t%d\n", rAvailableSeats);
        printf("S\t\t%d\n", sAvailableSeats);
        busName = 'a';
        x =0;
        do {
            if(x > 0){
                printf("Please Enter valid bus Name!\n");
            }
            printf("Enter the name of the bus :");
            scanf(" %c", &busName);
            x++;
        }while(!(busName == 'p' || busName == 'P' || busName == 'q' || busName == 'Q' || busName == 'r' ||
                busName == 'R' || busName == 's' || busName == 'S'));

        printf("Enter number of seats :");
        scanf("%d", &noOfSeats);
        totalSeatCount += noOfSeats;
        total += reservation(busName, noOfSeats);
        printf("Do you want to continue reserving seats (y or n) :");
        getchar();
        scanf("%c", &repeatProcess);

        if (repeatProcess == 'n' || repeatProcess == 'N') {
            break;
        }
    }

    if (totalSeatCount > 5) {
        total = total * 1.05;
    }
    printf("Total payment = Rs.%.2f", total);
    return 0;
}

float reservation(char name, int seats) {
    float netTotal;
    switch (name) {
        case 'p':
        case 'P':
            netTotal = 600 * seats;
            pAvailableSeats -= seats;
            break;
        case 'q':
        case 'Q':
            netTotal = 230 * seats;
            qAvailableSeats -= seats;
            break;
        case 'r':
        case 'R':
            netTotal = 700 * seats;
            rAvailableSeats -= seats;
            break;
        case 's':
        case 'S':
            netTotal = 820 * seats;
            sAvailableSeats -= seats;
            break;
    }
    return netTotal;
}
