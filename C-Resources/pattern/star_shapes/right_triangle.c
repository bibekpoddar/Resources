/*
 * C program to print right triangle star pattern series
*  Author :  BIBEK PODDAR
 */

#include <stdio.h>

int main()
{
    int i, j, n;

    /* Input number of rows from user */
    printf("Enter number of rows ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        /* Print i number of stars */
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}

