#include <stdio.h>
int main()
{
    // int x,y,area;
    // x = 2;
    // y = 21;
    // area = x*y;
    // printf("%d\n",area);
    int base, height, area;
    printf("base : ");
    scanf("%d", &base);
    printf("height : ");
    scanf("%d", &height);
    area = base * height;
    printf("Area = %d\n", area);
}