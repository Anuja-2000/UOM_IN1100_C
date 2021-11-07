#include <stdio.h>

float calculateTotal(char type, int days, char meal);

int main(){
    char roomType,withMeal,repeat;
    int days = 0,repeatCount = 0;
    float total = 0,taxedTotal = 0;
    do {
        roomType = 'a';
        printf("Select room type:\n-Single\n-Double\n-Triple\n\n");
        if(repeatCount == 0){
            printf("Enter choice:");
            scanf("%c", &roomType);
        }
        if(repeatCount > 0){
            printf("Enter choice:");
            getchar();
            scanf("%c", &roomType);
        }
        printf("Enter no.of days: ");
        scanf("%d", &days);
        printf("Do you want to order meals (y or n)? ");
        getchar();
        scanf("%c", &withMeal);
        total += calculateTotal(roomType,days,withMeal);
        printf("Do you want to reserve another room (y or n)? ");
        getchar();
        scanf("%c", &repeat);
        repeatCount++;
    } while (repeat == 'y' || repeat == 'Y');

    if(total >= 10000.00){
        taxedTotal = total*1.1;
    } else{
        taxedTotal = total;
    }

    printf("Total Bill = %0.2f\n",total);
    printf("Total Payable Amount = %0.2f\n",taxedTotal);
    return 0;
}

float calculateTotal(char type, int days, char meal) {
    float netTotal = 0;
    switch (type) {
        case 's':
            if(meal == 'y' || meal == 'Y'){
                netTotal = 2700.00 * days;
            } else if (meal == 'n' || meal == 'N'){
                netTotal = 2000.00 * days;
            } else{
                printf("Invalid Meal option!");
            }
            break;
        case 'S':
            if(meal == 'y' || meal == 'Y'){
                netTotal = 2700.00 * days;
            } else if (meal == 'n' || meal == 'N'){
                netTotal = 2000.00 * days;
            } else{
                printf("Invalid Meal option!");
            }
            break;
        case 'd':
            if(meal == 'y' || meal == 'Y'){
                netTotal = 5200.00 * days;
            } else if (meal == 'n' || meal == 'N'){
                netTotal = 4000.00 * days;
            } else{
                printf("Invalid Meal option!");
            }
            break;
        case 'D':
            if(meal == 'y' || meal == 'Y'){
                netTotal = 5200.00 * days;
            } else if (meal == 'n' || meal == 'N'){
                netTotal = 4000.00 * days;
            } else{
                printf("Invalid Meal option!");
            }
            break;
        case 't':
            if(meal == 'y' || meal == 'Y'){
                netTotal = 7300.00 * days;
            } else if (meal == 'n' || meal == 'N'){
                netTotal = 6000.00 * days;
            } else{
                printf("Invalid Meal option!");
            }
            break;
        case 'T':
            if(meal == 'y' || meal == 'Y'){
                netTotal = 7300.00 * days;
            } else if (meal == 'n' || meal == 'N'){
                netTotal = 6000.00 * days;
            } else{
                printf("Invalid Meal option!");
            }
            break;
        default:
            printf("Invalid Room Type!");

    }
    return netTotal;
}

