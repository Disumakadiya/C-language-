/*
name -DISU MAKADIYA
DATE -2-9-2024
aim- to find reverse of note
*/

#include<stdio.h>
void main()
{
int l=0,m,j,i;
char a1[70],a2[70];

printf("ENTER THE NOTE:");
gets(a1);

for(i=0;a1[i]!='\0';i++)
{
    l++;
}
for(i=l-1,j=0;i>=0;j++,i--)
{
    a2[j]=a1[i];
}
a2[j]='\0';
printf("%s",a2);

    printf("name- DISU MAKADIYA  id-24ce062");
}
