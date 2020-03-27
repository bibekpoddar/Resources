/**
 * C program to print hollow inverted pyramid star pattern
*  Author :  BIBEK PODDAR
 */

#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input rows to print from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(j=1; j<=(rows*2 - (2*i-1)); j++)
        {
            /*
             * Print star for first row(i==1),
             * ith column (j==1) and for
             * last column (rows*2-(2*i-1))
             */ 
            if(i==1 || j==1 || j==(rows*2 - (2*i - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}

Print half diamond star pattern

Input
IEnter number of columns: 5

Output

*
**
***
****
*****
****
***
**
*
Source code:
/**
 * C program to print half diamond star pattern series.
*  Author :  BIBEK PODDAR
 */

#include<stdio.h>

int main()
{
    int i, j, N, columns;

    /* Input number of columns from user */
    printf("Enter number of columns:");
    scanf("%d",&N);

    columns=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        if(i < N)
        {
            /* Increment number of columns per row for upper part */
            columns++;
        }
        else
        {
            /* Decrement number of columns per row for lower part */
            columns--;
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}

