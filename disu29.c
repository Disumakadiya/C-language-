/*
name:DISU MAKADIYA
aim:input character string using a function calloc()and realloc()
date:18-nov'24
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    char *name;
    int initial_size=8;
    int new_size=10;

    //allocated memory using calloc
    printf("enter the string:");
    name=(char*)calloc(8,sizeof(char));
    if(name == '\0')
    {
        printf("memory allocation is wrong\n");
    }

    //assign the initial size of string by calloc
    // strcpy(name,"HELLO WORLD");
    gets(name);
    printf("Memory allocated by calloc is:");
    puts(name);
    printf("\n*****");

    //allocated memory using realloc
    printf("\nenter the string for realloc memory allocation:\n");
    name=(char*)realloc(name,10);
    fflush(stdin);
    gets(name);

    //modify string by realloc
    printf("Memory allocated by realloc is %s\n",name);


    printf("******\n");
    printf("DISU MAKADIYA \n 24CE062");
}