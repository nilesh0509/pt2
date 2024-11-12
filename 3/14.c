#include<stdio.h>
int main(){
    char str1[] = {'H', 'A', 'I'};
    char str2[] = {'H', 'A', 'I'};
    if (strcmp(str1, str2)){ 
        printf("strings are equal");
    }else{ 
        printf("strings are not equal"); 
    }

return 0;

}
//strings are equal