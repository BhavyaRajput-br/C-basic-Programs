
#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], C[3][3];

    printf("Enter elements of Matrix A (3x3):\n");
    int i=0;
    int j=0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (3x3):\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    printf("Sum Matrix:\n");

    for ( i = 0; i < 3; i++)
    {      for ( j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];

            printf("%d ", C[i][j]);
        }

        printf("\n");
    }

    return 0;
}

