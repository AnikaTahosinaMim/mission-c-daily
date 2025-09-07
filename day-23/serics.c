#include <stdio.h>
// 1.2+2.3+3.4 +........N,N1
int main()
{
    int n, n1, sum = 0,
               a = 1, b = 2;
    scanf("%d %d", &n, &n1);
    printf("1.2 + 2.3 + 3.4+........+%d.%d ", n, n1);
    while (a <= n && b <= n1)
    {
        sum = sum + a * b;
        a = a + 1;
        b = b + 1;
    }
    printf("= %d", sum);

    return 0;
}