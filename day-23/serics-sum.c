#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    // printf("1 + 2 +3 .....+%d ", n);
    // printf("1 + 3 +5 +.....+%d ", n);
    for (int i = 1; i <= n; i = i + 2)
    {
        sum = sum + i;
    }
    printf("= %d", sum);

    return 0;
}