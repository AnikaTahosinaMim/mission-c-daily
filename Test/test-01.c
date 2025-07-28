#include <stdio.h>
int main()
{
    int num1, num2, num3, sum,s;
    float area;
    printf("Enter three numbers: ");
    scanf("%o %o %o", &num1, &num2, &num3);
    sum = ("%d %d %d", num1, num2, num3);
    s = sum / 2;
    area = s * (s - num1) * (s - num2) * (s - num3);
    printf("The area of the triangle is: %.2f\n", area);
    

    return 0;
}