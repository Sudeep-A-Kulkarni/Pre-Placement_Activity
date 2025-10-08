#include<stdio.h>
#pragma pack (1)        // allocates memory in 1 bytes 


struct Demo
{
    int i;
    char ch;
    float f;
    int j;
    char ch2;

};




int main(){

    printf("Size of structure is %lu\n",sizeof(struct Demo));   
    
    return 0;
}