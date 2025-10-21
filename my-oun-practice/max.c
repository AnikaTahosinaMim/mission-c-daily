#include <stdio.h>
#include <limits.h>
int main()
{
    int n, max = INT_MIN;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
    }
    printf("%d", max);
    return 0;
}