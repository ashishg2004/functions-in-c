#include <stdio.h>
#include <math.h> 

double getDiameter(double radius) {
    return (2 * radius);
}

double getCircumference(double radius) {
    return (2 * 3.14 * radius); 
}

double getArea(double radius) {
    return (3.14 * radius * radius); 
}

int main() {
    float radius, dia, circ, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    dia = getDiameter(radius);
    circ = getCircumference(radius);
    area = getArea(radius);

    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area);

    return 0;
}