#include<stdio.h>
void fun(int[][3]);
int main(void){ 
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    fun(arr);
    printf("%d\n", arr[2][1]);
    return 0;
}
void fun(int b[][3]) {
    ++b;
    b[1][1] = 15; 
}
//15