#include <stdio.h>

struct Student {
    union {
        int indexNo;
        char name[20];
    }u;
    int marks;
}s1;


int main() {

    char choice;
    printf("You can enter either name or the index number\n");
    printf("Do yuo want to  enter the name (y or n)?");
    scanf("%c", &choice);

    if (choice == 'y') {
        printf("Enter the name: ");
        scanf("%s",s1.u.name);
    } else{
        printf("Enter Index number: ");
        scanf("%d",&s1.u.indexNo);
    }

    if(choice == 'y' || choice == 'n'){
        printf("Enter Marks: ");
        scanf("%d",&s1.marks);
    }

    if(choice == 'y')
        printf("%s",s1.u.name);
    else
        printf("%d",s1.u.indexNo);

    printf("Marks = %d\n",s1.marks);
    return 0;
}