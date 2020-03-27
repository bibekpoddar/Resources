/**
 * C program to print hollow parallelogram star pattern
*  Author :  BIBEK PODDAR
 */

#include <stdio.h>

int main()
{
    int i, j, rows, columns;

    /* Input number of row and column */
    printf("Enter number of  rows : ");
    scanf("%d", &rows);
    printf(“Enter number of columns: ");
    scanf("%d", &columns);

    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }

        /* Print stars and center spaces */
        for(j=1; j<=columns; j++)
        {
            if(i==1 || i==rows || j==1 || j==columns)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}

