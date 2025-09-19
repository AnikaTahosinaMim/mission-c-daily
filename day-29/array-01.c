#include <stdio.h>
int main()
{
    int num[5];
    num[0] = 50;
    num[1] = 60;
    num[2] = 70;
    num[3] = 80;
    num[4] = 90;
    int sum = num[0] + num[1] + num[2] + num[3] + num[4];
    printf("%d", sum);

    return 0;
}