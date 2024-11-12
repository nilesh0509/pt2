#include<stdio.h>

int main()

{ int rows = 3, colums = 4, i, j, k; int a[3][4] = {1, 2, 3, 5, 7}; i = j = k = 00; for(i = 0; i<rows;i++) for(j=0;j<colums;j++) if(a[k][j]<k)

k = a[i][j];

printf("%d", k);

return 0;

}
//0