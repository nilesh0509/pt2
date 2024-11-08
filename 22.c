#include<stdio.h> 
int main() {
    while(printf("%d", 5) < 4) 
        printf("Loop"); 
    return 0;
}
//infinite