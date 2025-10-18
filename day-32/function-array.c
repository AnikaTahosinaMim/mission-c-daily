#include <stdio.h>
int main()
{
    int num[] = {10, 20, 30, 40, 50};
    // int i;
    display(num);
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d ", num[i]);
    // }
    return 0;
}
void display(int num[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
}