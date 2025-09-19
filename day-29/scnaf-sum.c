#include <stdio.h>
int main()
{
    int a[5], i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    printf("%d\n", sum);
    printf("And avarage is:  %.2f\n", sum / 5.0);

    return 0;
}