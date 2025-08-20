#include <stdio.h>
int main()
{
    int temp, i, sum, initialNum, r, finalNum;
    printf("Enter initial value: ");
    scanf("%d", &initialNum);
    printf("Enter final value: ");
    scanf("%d", &finalNum);
    for (i = 1; i < 1000; i++)
    {
        temp = i;
        while (temp != 0)
        {
            r = temp % 10;
            sum = sum + r * r * r;
            temp = temp / 10;
        }
        if (sum == i)
        {
            printf(" %d ", i);
        }
        sum = 0;
    }

    return 0;
}