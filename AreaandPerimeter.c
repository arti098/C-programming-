#include <stdio.h>
#include <stdlib.h> 

int main() {
    float radius, side, length, breadth;
    float area, perimeter;
    float pi = 3.14;  // using variable instead of #define

    // Circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    if (radius <= 0) {
        printf("Invalid radius!\n");
        exit(0);
    }
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
    printf("Circle: Area = %.2f, Perimeter = %.2f\n", area, perimeter);

    // Square
    printf("Enter side of square: ");
    scanf("%f", &side);
 if (side <= 0) {
        printf("Invalid side!\n");
        exit(0);
    }
    area = side * side;
    perimeter = 4 * side;
    printf("Square: Area = %.2f, Perimeter = %.2f\n", area, perimeter);

    // Rectangle
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    if (length <= 0 || breadth <= 0) {
        printf("Invalid dimensions!\n");
        exit(0);
    }
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Rectangle: Area = %.2f, Perimeter = %.2f\n", area, perimeter);

    return 0;
}
