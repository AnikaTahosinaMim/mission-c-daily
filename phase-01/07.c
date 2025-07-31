#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d\n", &num);
    if (num % 97 == 0)
        printf("yes");
    else
        printf("No");
}