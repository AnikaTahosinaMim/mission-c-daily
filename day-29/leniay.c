#include <stdio.h>
int main()
{
    int n, i, pos = -1, value;
    int num[] = {1, 20, 16, 5, 10, 1, 6, 9};
    scanf("%d", &value);
    for (i = 0; i < 10; i++)
    {
        if (value == num[i])
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
        printf("invaliad");
    else
        printf("the values position is: %d", pos);
    return 0;
}