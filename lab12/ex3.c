#include <stdio.h>

struct Student{
    char name[20];
    int roll;
};

void printDetails(struct Student s1);

int main(){
    struct Student s;
    printf("Enter student's name : ");
    scanf("%s",s.name);
    printf("Enter roll number : ");
    scanf("%d",&s.roll);
    printDetails(s);

    return 0;
}

void printDetails(struct Student s1) {

    printf("Name : %s\nRoll : %d",s1.name,s1.roll);

}

