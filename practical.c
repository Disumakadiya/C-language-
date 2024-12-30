#include<stdio.h>
void main()
{
    char string[25];
    int length=0,i;

    printf("input string to calculate length:");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }
    printf("length of string is %d",length);
}
