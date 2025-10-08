#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Ask user for two integers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate their sum
    sum = num1 + num2;

    // Display the result
    printf("Sum = %d\n", sum);

    return 0;
}