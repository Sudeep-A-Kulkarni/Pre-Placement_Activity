#include<stdio.h>


int main()
{
    int Arr[4] = {10, 20, 30, 40};
    printf("%d",&Arr[0]);
    printf("%d",(&Arr)+1);

    return 0;

}