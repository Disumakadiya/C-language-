/*
Name:DISU MAKADIYA
date of program:20 july 2024
aim: to PROGRAM TO PERFORM BASIC ARITHMETIC OPERATIONS..
*/

#include<stdio.h>

void main()
{
  int x,y;
  char a;

  printf("ENTER THE FIRST NO.\n");
  scanf("%d",&x);
  printf("ENTER THE SECOND NO.\n");
  scanf("%d",&y);
  fflush(stdin);
  printf("ENTER ADDITION=+,SUBTRACTION=-,MULTIPLICATION=*,DIISION=/ \n");
  scanf("%c",&a);

  switch ( 0 )
    {
    case'+':
        printf("x+y=%d",x+y);
        break;
    case'-':
        printf("x-y=%d",x-y);
        break;
    case'*':
        printf("x*y=%d",x*y);
        break;
    case'/':
        printf("x/y=%d",x/y);
        break;
    default:
        printf("invalid user input");
    }
}
