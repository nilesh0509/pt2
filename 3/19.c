#include<stdio.h>
int main(){
    int arr[]={1.2, 2.4, 3.6, 4.8, 5}; 
    int j, *ptr = arr; 
    for(j=0;j<5;j++){
        printf("%d ", *arr);
        ++ptr;
    }
    return 0;
}
//11111