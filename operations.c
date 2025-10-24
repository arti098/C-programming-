#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");

    int a, b;
    int multiplication, addition, subtraction, remainder;

    printf("Enter the first number: ");
    scanf("%i", &a);

    printf("Enter the second number: ");
    scanf("%i", &b);

    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    remainder = a % b;

    printf("Addition = %i\n", addition);
    printf("Subtraction = %i\n", subtraction);
    printf("Multiplication = %i\n", multiplication);
    printf("Remainder = %i\n", remainder);

    return 0;
}
