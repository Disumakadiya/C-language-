/*
name:DISU MAKADIYA
date:25-NOV'24
aim:a C program to read a text file ‘Demo.txt’ and print each word of that file
in reverse order.
*/

#include<stdio.h>
void main()
{
    FILE *file;
    char name[50],rev_note[50];
    int i,j,l=0;
    file=fopen("Demo.txt","r");
    printf("Enter the word:");
    gets(name);
    fclose(file);
    file=fopen("Demo.txt","w");

  if(file==NULL)
     {
         printf("error!!file not found\n");
     }
     else
     {
         while(!feof(file))
    for(i=0; name[i]!='\0'; i++)
    {
        l++;
    }
    for(i=(l-1),j=0; i>=0; i--,j++)
    {
        rev_note[j]=name[i];
    }
    rev_note[j]='\0';
    printf("Reverse note:");
    puts(rev_note);
     }
    fclose(file);
    printf("*********\n");
    printf("DISU MAKADIYA \n 24CE062");

}


