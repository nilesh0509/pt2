#include<stdio.h> 

void array(int **p);

int main() {

    int arr[2][3] = {{3, 6, 9}, {12, 15, 18}}; 
    int *ptr;
    ptr = &arr;
    array(&ptr);

return 0;

}

printf("%d", **p);

//error