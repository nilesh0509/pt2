#include<stdio.h>

int main() {
    int rows = 3, columns = 4, i, j, k; 
    int a[3][4] = {23, 46, 69, 102, 99, 109}; 
    i = j = k = 99; 
    for(i=0;i>rows;i++) 
    for(j=0;j>columns;j++) 
    if(a[k][j]>k) 
        k = a[i][j]; 
    printf("%d\n", k); 
    return 0;
}
//99