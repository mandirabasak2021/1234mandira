#include <stdio.h>

int main(void) {
    float pi=3.14,radius,area;
    printf("Enter radius of a circle\n");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area of circle is %f having the radius %f",area,radius);
    return 0;
}
