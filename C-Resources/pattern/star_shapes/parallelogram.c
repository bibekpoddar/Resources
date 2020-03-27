/**
 * C program to print Rhombus star pattern series
*  Author :  BIBEK PODDAR
 */

#include <stdio.h>

int main()
{
    int i, j, rows, columns;

    /* Input rows and columns from user */
    printf("Enter number of  rows: ");
    scanf("%d", &rows);
    printf("Enter number of  columns: ");
    scanf("%d", &columns);

    /* Iterate through each row */
    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=rows - i; j++)
        {
            printf(" ");
        }

        /* Print stars after spaces */
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        /* Move to the next line */
        printf("\n");
    }

    return 0;
}

