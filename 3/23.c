#include<stdio.h>
#include<string.h>
int main(){
    const char str1[10]="Helloworld";
    const char str2[10] = "world";
    char *mat;
    mat = strstr(str1, str2);
    printf("The substring is:%s\n", mat);
    return 0;
}
//world