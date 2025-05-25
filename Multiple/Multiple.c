#include <stdio.h>

int main() {
    int num1, num2=500, mul;

    // Input from the user
    printf("Enter Your ID number: ");
    scanf("%d", &num1);

    // Addition
    mul = num1 * num2;

    // Output the result
    printf("The sum of %d and %d is: %d\n", num1, num2, mul);

    return 0;
}
