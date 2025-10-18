#include <stdio.h>
int squral(int a)
{
    return a * a;
}
int main()
{
    int num;
    scanf("%d", &num);
    int result = squral(num);
    printf("The number : %d\n", result);
    return 0;
}