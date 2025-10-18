#include <stdio.h>
int main()
{
    double area, height, base;
    printf("enter height: ");
    scanf("%lf", &height);
    printf("enter base: ");
    scanf("%lf", &base);
    trainglearea(height, base);
    printf("%.2lf\n", area);
    return 0;
}
double trainglearea(double a, double b)
{
    return 0.5 * a * b;
}