#include <stdio.h>
#define PI 3.14159  

int main() {
    float r, a;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    a = PI * r * r;  
    printf("The area of the circle with radius %.2f is: %.2f\n", r, a);
    return 0;
}
