#include "stdio.h"

void main()
{
    char name[50],id[10];
    int year = 0,x = 0;
    float fees = 200,total = 200;
    printf("========== ABC Institue ============\n");
    printf("Enter name:");
    scanf("%s",name);
    printf("Enter id:");
    scanf("%s",id);
    printf("Enter duration of study (in years):");
    scanf("%d",&year);

    x = year;
    while (x > 1){
        fees = fees * 1.05;
        total = total + fees;
        x--;
    }

    printf("Student name: %s\n",name);
    printf("ID no: %s\n",id);
    printf("Total period of time = %d\n",year);
    printf("Total fees = %0.2f\n",total);

}
