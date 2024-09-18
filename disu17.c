/*
name-DISU MAKADIYA
date-6/9/2024
aim-seating arrangment in program
*/

#include<stdio.h>

void main()
{
    int r,c,i,j,n;
    /*
    r=rows input
    c=columns input
    i=no. of rows
    j=no. of columns
    */

    char a[20][20];

    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
            a[i][j]='O';
        }
    }

    printf("total no. of reserved seats:");
    scanf("%d",&n);
// book seats
    for(i=0;i<n;i++)
    {
        printf("enter row and seat no. for reserved seats %d for eg.(1 2):",n+1);
        scanf("%d %d",&r,&c);
        a[r-1][c-1]='X';
    }

    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    printf("name-DISU MAKADIYA  id-24ce062");
}
