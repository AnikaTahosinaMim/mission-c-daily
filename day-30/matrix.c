#include <stdio.h>
int main()
{
    int i, j;
    int A[3][4];
    int B[3][4];

    printf("Enter any Numbers for A\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("A [%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("A =\n");
    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Enter any Numbers for B\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("B [%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("B =\n");
    for (i = 0; i < 3; i++)
     {
        printf("\t");
        for (j = 0; j < 4; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
        return 0;
}