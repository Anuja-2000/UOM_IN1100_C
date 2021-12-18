#include <stdio.h>
#include "string.h"

/*
int main(){
    int a[5] = {1,2,3,4,5};
    int *p;
    p=a;

    for (int i = 0; i < 5; ++i) {
        printf("%X\n",a+i);
    }
    return 0;
}
*/

/*
int main(){
    char *str = "Hello";
    char st[30] = "Hello";
    return 0;
}
*/

typedef struct Book{
    char name[10];
    int price;
}BookA;

int main(){
    BookA a;
    BookA  *ptr;

    ptr = &a;
    a.price = 100;
    ptr->price = 100;
    strcpy(ptr->name,"Saman");

    printf("name = %s",ptr->name);
    /*struct Book b[10];
    struct Book *p;
    p = &b;
    */
    return 0;
}
