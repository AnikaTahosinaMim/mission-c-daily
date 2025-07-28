#include <stdio.h>
int main(){
    // double a,b,c,s,area;
    // printf("Enter three values: ");
    // scanf("%lf %lf %lf",&a, &b, &c );
    // s = (a+b+c)/2;
    // area= sqrt(s*(s-a)*(s-b)*(s-c));
    // printf("The area: %.2lf",area);

    // float lenth,height,area;
    // printf("Enter lenth: ");
    // scanf("%f",&lenth); 
    // printf("Enter height: ");
    // scanf("%f",&height);
    // area = lenth*height;
    // printf("Area = %.2f",area);
    float area, radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("Area of circle = %.2f\n", area);
        


    return 0;
}