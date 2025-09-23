#include <stdio.h>
int main()
{
    int i, j;
    int A[2][2];
    int B[2][2];
    int C[2][2];
    printf("Enter any value: A \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("A [%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)

    {
        for (j = 0; j < 2; j++)
        {
            printf("B [%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("A = \n");
    for (i = 0; i < 2; i++)
    {
        printf("\t");
        for (j = 0; j < 2; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("B = \n");
    for (i = 0; i < 2; i++)
    {
        printf("\t");
        for (j = 0; j < 2; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf(" \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
           C[i][j] = A[i][j] + B[i][j]; 
        }
        printf("\n");
    }
    printf("\n");
    printf("A+B = \n");
    for (i = 0; i < 2; i++)
    {
        printf("\t");
        for (j = 0; j < 2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}