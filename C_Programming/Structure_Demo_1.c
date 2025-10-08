#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;

};



int main(){
    struct Demo obj;            //memory is allocated over here

    printf("Size of Demo is %lu\n",sizeof(struct Demo));        //12  /// this gives info about how much memory will be allocated
    printf("Size of obj is :%lu\n",sizeof(obj));


    return 0;
}