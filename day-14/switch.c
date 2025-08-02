#include <stdio.h>
int main()
{
    int digit;
    printf("Enter any digit: ");
    scanf("%d", &digit);
    switch (digit)
    {
    case 0:
        printf("Zero \n");
        break;
    case 1:
        printf("one \n");
        break;
    case 2:
        printf("two \n");
        break;
    case 3:
        printf("Three \n");
        break;
    case 4:
        printf("Four \n");
        break;
    case 5:
        printf("Five \n");
        break;
    default:
        printf("Not valied");
    }

    return 0;
}