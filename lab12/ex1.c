#include <stdio.h>
#include <string.h>

struct Address {
    int number;
    char street[20];
    char lane[20];
    char town[20];
};

struct student {
    char name[20];
    char index[7];
    int age;
    char gender;
    struct Address address;
};

int main() {
    struct student s;
    printf("Enter your name: ");
    scanf("%[^\t\n]s", s.name);
    printf("Enter your index number: ");
    scanf("%s", s.index);
    printf("Enter your age: ");
    scanf("%d", &s.age);
    printf("Enter your gender (M/F): ");
    scanf(" %c", &s.gender);
    printf("Enter your Address number: ");
    scanf("%d", &s.address.number);
    printf("Street: ");
    scanf("%s", s.address.street);
    printf("Lane: ");
    scanf("%s", s.address.lane);
    printf("Town: ");
    scanf("%s", s.address.town);

    printf("Name : %s\nIndex No : %s\nAge : %d\nGender : %c\nAddress : %d\n\t%s\n\t%s\n\t%s",
           s.name,
           s.index,
           s.age,
           s.gender,
           s.address.number,
           s.address.street,
           s.address.lane,
           s.address.town);

    return 0;
}
