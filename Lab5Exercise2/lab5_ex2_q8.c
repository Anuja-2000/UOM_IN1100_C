#include <stdio.h>

void main()
{
    int year,month,noOfDays;
    printf("Enter year and month:");
    scanf("%d %d",&year,&month);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            noOfDays = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            noOfDays = 30;
            break;
        case 2:
            if(year % 4 == 0)
            {
                if (year % 100 == 0)
                {
                    if(year % 400 == 0)
                    {
                        noOfDays = 29;
                    }
                    else
                    {
                        noOfDays = 28;
                    }
                }
                else
                {
                    noOfDays = 29;
                }

            }
            else
            {
                noOfDays = 28;
            }
            break;
    }
    printf("Number of days: %d", noOfDays);

}

