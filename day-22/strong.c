#include <stdio.h>
int main()
{
    int num, temp, i, r, fact, sum = 0;
    printf("Enter any NUmber: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        fact = 1;
        for (i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == num)
    {
        printf("%d  strong Number ",num);
    }
    else
        printf("%d Not a strong Number",num);

            return 0;
}