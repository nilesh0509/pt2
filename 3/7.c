#include<stdio.h>
int main(){
    char arr[100];
    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';   
    arr[4] = 'd';
    abc(arr);
    return 0;
}
abc(char arr[]){
    printf("%c", *++arr);
    printf("%c", *arr++);
}
//bb