#include <stdio.h>
#include <stdlib.h>

/*int facto(int n);
int fac = 1;
int main(){
    printf("%d",facto(5));
    return 0;
}
int facto(int n){
    fac = fac * n;
    n--;
    if(n == 0){
        return fac;
    }
    facto(n);
}*/

int main(){
    char* abc = "Anuaj";
//    char **strarr = ("Adfe","asfkf","sefwg");
    char *str[] = {"aDA","EWFW","AFWGW"};
    char arr[3][10] = {"abcd","egjdks","djffie"};
    printf("%d",sizeof(arr));

    return 0;
}

