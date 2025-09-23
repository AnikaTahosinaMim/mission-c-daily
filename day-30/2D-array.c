#include <stdio.h>
int main()
{
    int row, col;
    int A[4][4] = {{1, 2, 3, 4}, {
                                     5,
                                     6,
                                     7,
                                     8,
                                 },
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};
    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }
    return 0;
}