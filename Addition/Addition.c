#include <stdio.h>

int main() {
    int num1, num2=500, sum;

    // Input from the user
    printf("Enter Your ID number: ");
    scanf("%d", &num1);

    // Addition
    sum = num1 + num2;

    // Output the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
