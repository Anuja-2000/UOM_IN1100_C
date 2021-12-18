#include <stdio.h>

int main(){
    int arr1[5],no;
    for (int i = 0; i < 5; ++i) {
        printf("Enter a positive number:");
        scanf("%d",&no);
        if(no < 0){
            printf("Invalid number. Please re-enter");
            i--;
        } else{
            arr1[i] = no;
        }
    }

    for (int i = 0; i < 5; ++i) {
        printf("%d ",arr1[i]);
    }
    return 0;
}