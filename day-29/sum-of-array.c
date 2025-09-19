#include <stdio.h>
int main()
{
    int sum = 0, i, a[5];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    printf("the sum is %d\n", sum);
    //  printf("The avarage : %.2f\n",(float)sum/5);
    printf("The avarage : %2.f\n", sum / 5.0);

    return 0;
}