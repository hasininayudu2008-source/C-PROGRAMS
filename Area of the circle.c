#include <stdio.h>
#define PI 3.14159
int main() {
    float radius, area;
    // Ask user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    // Calculate the area
    area = PI * radius * radius;
    // Display the result
    printf("Area of the circle with radius %.2f is %.2f\n", radius, area);
    return 0;
}

                                                                                                                