#include <stdio.h>
#include <stdio.h>

float calculateTotal(char type, int DAYS, char meal);

int main(){
    char withMeal,repeat,roomType,;
    int DAYS = 0,RC = 0;
    float total = 0,FinalTotal = 0;
    do {
        roomType = 'a';
        printf("Select the room type\n");
        printf("- Single Room\n");
        printf("- Double Room\n");
        printf("- Triple Room\n");

        printf("Enter choice : ");
        scanf("%c", &roomType);

        printf("Enter no.of days: ");
        scanf("%d", &DAYS);

        printf("Do you want to order meals (y or n)? ");
        getchar();
        scanf("%c", &withMeal);


        total += calculateTotal(roomType,DAYS,withMeal);

        printf("Do you want to reserve another room (y or n)? ");
        getchar();
        scanf("%c", &repeat);
        RC++;
    } while (repeat == 'y' || repeat == 'Y');

    if(total >= 10000.00){
        FinalTotal = total*0.9;
    } else{
        FinalTotal = total;
    }

    printf("Total Bill = %0.2f\n",total);
    printf("Total Payable Amount = %0.2f\n",FinalTotal);
    return 0;
}

float calculateTotal(char type, int DAYS, char meal) {
    float netTotal = 0;

    switch (type) {
        case 's':
            if(meal == 'y' || meal == 'Y'){
                netTotal = 2700.00 * DAYS;
            } else if (meal == 'n' || meal == 'N'){
                netTotal = 2000.00 * DAYS;
            } else{
                printf("Invalid Meal option!");
            }
            break;
        case 'S':
            if(meal == 'y' || meal == 'Y'){
                netTotal = 2700.00 * DAYS;
            } else if (meal == 'n' || meal == 'N'){
                netTotal = 2000.00 * DAYS;
            } else{
                printf("Invalid Meal option!");
            }
            break;
        case 'd':
            if(meal == 'y' || meal == 'Y'){
                netTotal = 5200.00 * DAYS;
            } else if (meal == 'n' || meal == 'N'){
                netTotal = 4000.00 * DAYS;
            } else{
                printf("Invalid Meal option!");
            }
            break;
        case 'D':
            if(meal == 'y' || meal == 'Y'){
                netTotal = 5200.00 * DAYS;
            } else if (meal == 'n' || meal == 'N'){
                netTotal = 4000.00 * DAYS;
            } else{
                printf("Invalid Meal option!");
            }
            break;
        case 't':
            if(meal == 'y' || meal == 'Y'){
                netTotal = 7300.00 * DAYS;
            } else if (meal == 'n' || meal == 'N'){
                netTotal = 6000.00 * DAYS;
            } else{
                printf("Invalid Meal option!");
            }
            break;
        case 'T':
            if(meal == 'y' || meal == 'Y'){
                netTotal = 7300.00 * DAYS;
            } else if (meal == 'n' || meal == 'N'){
                netTotal = 6000.00 * DAYS;
            } else{
                printf("Meal Option is invalid");
            }
            break;
        default:
            printf("The Room type entered is invalid!!!!");

    }
    return netTotal;
}
