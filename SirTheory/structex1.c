#include <stdio.h>

struct ContactDetails {
    int phoneNo;
    char address[50];
    int code;
};

struct Employee {
    char name[20];
    int age;
    struct ContactDetails cd;
    char gender;
} emp[5];

int main() {
    for (int i = 0; i < 5; ++i) {
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter age: ");
        scanf("%d", &emp[i].age);
        printf("Enter contact details \n Enter phone number: ");
        scanf("%d", &emp[i].cd.phoneNo);
        printf("Enter Address:");
        scanf("%s", emp[i].cd.address);
        printf("Enter city code: ");
        scanf("%d", &emp[i].cd.code);
        printf("Enter gender (m/f): ");
        getchar();
        scanf("%c", &emp[i].gender);
    }

    for (int i = 0; i < 5; ++i) {
        printf("\n=======  Employee %d details =========\n", i + 1);
        printf("Name = %s\nAge = %d\nPhone number = %d\nAddress = %s\nCity code = %d\nGender = %c", emp[i].name, emp[i].age, emp[i].cd.phoneNo,
               emp[i].cd.address,emp[i].cd.code,emp[i].gender);
    }
    return 0;
}