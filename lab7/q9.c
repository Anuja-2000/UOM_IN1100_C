#include "stdio.h"

void main()
{
    float earning,com;

    while (earning != -1){
        printf("Enter the sales person's this week gross sales $:");
        scanf("%f",&earning);

        if(earning != -1) {
            com = 200 + earning * 0.09;
            printf("Last week income of the sales person = $%0.2f\n", com);
        }
    }
}
