#include "stdio.h"

int const city = 2,days = 7;
void main(){

    int covidPatients[city][days];

    for (int i = 0; i < city; i++) {
        for (int j = 0; j < days; j++) {
            printf("Enter value for city %d day %d =",i+1,j+1);
            scanf("%d",&covidPatients[i][j]);
        }
    }

    for (int i = 0; i < city; i++) {
        for (int j = 0; j < days; j++) {
            printf("\n\nPatients in city %d on day %d = %d\n",i+1,j+1, covidPatients[i][j]);
        }
        printf("\n\n");
    }

}