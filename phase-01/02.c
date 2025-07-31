#include <stdio.h>
int main()
{
    // float area,radius;

    // printf("redius: ");
    // scanf("%f\n",&radius);
    // area = 3.14*radius*radius;
    // printf("Area = %.3f\n",area);

    float height, radius, area;
    printf("height = ");
    scanf("%f", &height);
    printf("radius = ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius * height;
    printf("Area = %.3f\n", area);
}