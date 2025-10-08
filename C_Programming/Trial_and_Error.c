#include <stdio.h>


int main(){
    int no = 10;
    int *p = NULL;

    unsigned long q = &no;
    p = q;

    printf("%lu",*p);
    return 0;
    
}