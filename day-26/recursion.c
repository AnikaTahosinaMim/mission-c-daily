#include <stdio.h>
int main()
{
    int result = fact(4);
    printf("Fact of 4 = %d\n", result);
    return 0;
}
int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}