#include <stdio.h>
int main()
{
    double base, power;
    printf("enter base: ");
    scanf("%lf", &base);
    printf("enter power: ");
    scanf("%lf", &power);
    calculatePower(base, power);

    return 0;
}
void calculatePower(double base, double power)
{
    double i, result = 1;
    for (i = 1; i <= power; i++)
    {
        result = result * base;
    }
    printf("%.2lf", result);
}