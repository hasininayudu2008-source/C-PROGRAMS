#include <stdio.h>

int main() {
    float l, b;
    scanf("%f%f", &l, &b);
    printf("Area=%.2f\nPeri=%.2f", l*b, 2*(l+b));
}

