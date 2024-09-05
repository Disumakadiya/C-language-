/*
name-disu makadiya
aim- to copy the note
date-2/9/2024
*/

#include<stdio.h>
int main()
{
int i,j,l=0;

char a1[50],a2[50];
//print note
printf("ENTER THE NOTE:");
gets(a1);
//for a note

for(i=0;a1[i]!='\0';i++)
    //length of note
{
    l++;
}

for(j=0;j<=l;j++)
//copy string
{
    a2[j]=a1[j];
}
a2[j]='\0';

printf("COPY THE NOTE:%s",a2);
//copy the note
return 0;
}
