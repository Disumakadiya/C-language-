/*
name-disu makadiya
aim- to concate the note
date-2/9/2024
*/

#include<stdio.h>
void main()
{
int x,y,i,j,l1=0,l2=0,l;
char a1[50],a2[50],a3[100];
printf("ENTER THE FIRST NOTE:");
gets(a1);

for(x=0;a1[x]!='\0';x++)
{
    l1++;
}

printf("ENTER THE SECOND NOTE:");
gets(a2);

for(y=0;a2[y]!='0';y++)
{
    l2++;
}
l=l1+l2;
printf("\nmerging array -");

for(i=0;i<l1;i++)
{
    a3[i]=a1[i];
}

for(j=i;j<l;j++)
{
    a3[j]=a2[j-i];
}

a3[j+1]='\0';
printf("%s",a3);

    printf("Name-DISU MAKADIYA  id-24CE062 ");
}
