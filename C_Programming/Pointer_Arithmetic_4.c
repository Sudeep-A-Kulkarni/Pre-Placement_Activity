#include<stdio.h>



int main(){

    int Arr[] ={10, 20, 30, 40};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[3]);
    q = &(Arr[2]);

    printf("Result of subtraction is : %ld \n",q-p);          //allowed 

    q = q - 2;

    printf("Data pointed by q is : %d\n",*q);




    
    return 0;
    
}