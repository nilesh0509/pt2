#include<stdio.h> 
int main() {

    int i = 0; 
    while(++i){
        i== --i?i = 0:i = 1;
        printf("%d", i); 
    }


return 0;


}
//error
