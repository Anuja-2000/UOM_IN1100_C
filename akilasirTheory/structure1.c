#include "stdio.h"
#include "string.h"

struct Address {
    int homeNo;
    char street[20];
    char town[15];
};

struct Student{
    char name[30];
    int age;
    float gpa;
    struct Address address;
};

int main(){
    //*** Once declaring and initialisation happened at same time we can give string inside "" commas like this ***

    struct Student s = {"Kamal",21,4.15,{128,"Arunodaya Mw","Piliyandala"}};

    //But we do the declaration and after initialisation we have to use strcpy() to assign string to variables.
    /*struct Student s1;
    strcpy(s1.name,"Amal");
    s1.age = 22;
    s1.gpa = 3.95;
    s1.address.homeNo = 129;
    strcpy(s1.address.street,"Kottawa Rd");
    strcpy(s1.address.town,"Piliyandala");*/

    struct Student s2;
    printf("Enter name: ");
    scanf("%s",s2.name);
    printf("Enter Age : ");
    scanf("%d",&s2.age);
    printf("Enter GPA : ");
    scanf("%f",&s2.gpa);
    printf("Enter Address : \n");
    printf("Enter Home No : ");
    scanf("%d",&s2.address.homeNo);
    printf("Enter Street : ");
    scanf("% [^\n]s",s2.address.street);
    printf("Enter Town : ");
    scanf("% [^\n]s",s2.address.town);


    printf("Name : %s\nAge : %d\nGPA : %.2f\nAddress :\nNO : %d,\n%s,\n%s.",s2.name,s2.age,s2.gpa,s2.address.homeNo,s2.address.street,s2.address.town);
    return 0;
}