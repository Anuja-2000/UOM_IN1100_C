#include "stdio.h"
#include "string.h"

int main(){
    /*char arr[] = "Hello";

    char *ptr = "Hello";

//    printf("%s",ptr);
    puts(ptr);
    puts(ptr);  */

    char arr[50] = "hello";
    char arr1[50] = "world";
//    printf("Enter any string:");
    //scanf("%[^\n]s",arr); // scanf() doesn't store whitespace so we need to insert [^\n] part
//    gets(arr);
//    printf("%s",arr);
    printf("%d\n", strlen(arr));
    printf("%d\n", strcmp(arr,arr1));
    printf("%s\n", strcat(arr, arr1));
    return 0;
}