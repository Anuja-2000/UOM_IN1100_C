#include "stdio.h"
int vehicleCount(int,int);
int value = 0;
void main()
{
    int count,modelYear,noOfMiles;

    for (int i = 0; i < 5; i++) {
        printf("Enter model year and number of miles:");
        scanf("%d %d",&modelYear,&noOfMiles);

        count = vehicleCount(modelYear,noOfMiles);
    }

    printf("No of Vehicles = %d",count);
}

int vehicleCount(int modelYear,int noOfMiles)
{

    if (modelYear == 2019 && noOfMiles <= 10000)
    {
        value++;
    }
    return value;
}
