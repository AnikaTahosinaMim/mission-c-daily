#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("not prime");
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("prime");
        }
        else
        {
            printf("not prime");
        }
    }
    return 0;
}