#include <stdio.h>

struct Student{
    char name[20];
    int marks;
};

int main(){
    struct Student s[10];
    printf("Enter information of students:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nFor roll number %d\n",i+1);
        printf("Enter Name:");
        scanf("%s",s[i].name);
        printf("Enter Marks:");
        scanf("%d",&s[i].marks);
    }

    printf("\nDisplaying information of students:\n");
    for (int i = 0; i < 10; ++i) {
        printf("\nInformation for roll number %d:\n",i+1);
        printf("Name: %s\n",s[i].name);
        printf("Marks: %d\n",s[i].marks);
    }
    return 0;
}