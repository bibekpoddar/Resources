/**
 * C program to print hollow mirrored parallelogram star pattern series
*  Author :  BIBEK PODDAR
 */

#include <stdio.h>

int main()
{
    int i, j, M, N;

    /* Input number of rows from user */
    printf("Enter number of  rows: ");
    scanf("%d", &M);
    printf("Enter number of  columns: ");
    scanf("%d", &N);

    for(i=1; i<=M; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }


        /* Print hollow parallelogram */
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==M  || j==1|| j==N)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}

