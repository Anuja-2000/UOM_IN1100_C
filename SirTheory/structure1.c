#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int nic;
    float salary;
    int age;
}p3,p4;

struct man{
    int nic;
    int age;
}s[5];

struct Person2{
    int nic;
    int age;
    struct Date {
        int mm,dd,yy;
    }dob;
};


int main() {
//    struct Person p3;
//    struct Person p1= {"Amal", 200026101452, 52000.00, 25};
//    printf("Address of p1.age = %d\n",&p1.age);
//    printf("Address of p2.age = %d\n",&p2.age);

//    struct Person p2;
//    strcpy(p2.name,"Amal");
//    p2.age = 25;

//    printf("Enter name:");
//    scanf("%s",p3.name);
//    printf("Name = %s\n",p3.name);
//
//    printf("Enter age:");
//    scanf("%d",p3.age);
//    printf("Name = %d\n",p3.age);

//    typedef struct Person pers;
//    pers p3 = {"Anuja",200026101452,520000.00,21};

//    for (int i = 0; i < 5; ++i) {
//        printf("Enter NIC: ");
//        scanf("%d",&s[i].nic);
//        printf("Enter age: ");
//        scanf("%d",&s[i].age);
//    }
//
//    for (int i = 0; i < 5; ++i) {
//        printf("\nNIC = %d   Age = %d\n",s[i].nic,s[i].age);
//    }

//    struct man m1 = {565486,45};
//    printf("m1 --> NIC = %d m1 --> Age = %d",m1.nic,m1.age);
//    struct man m2 = m1;
//    printf("\nm2 --> NIC = %d m2 --> Age = %d",m2.nic,m2.age);




    return 0;
}