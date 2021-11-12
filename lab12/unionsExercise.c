#include <stdio.h>

union Student{
    int roll,marks;
    char name[20];
};

int main(){
    union Student s;
    printf("Enter Student roll number :");
    scanf("%d",&s.roll);
    printf("Student Name:");
    scanf("% s",s.name);
    printf("Marks:");
    scanf("%d",&s.marks);

    printf("\nRoll Number: %d\nName: %s\nMarks: %d",s.roll,s.name,s.marks);
    return 0;
}