/*
Name-disu makadiya
date-13/9/24
aim-print names in alphabetical order
*/

#include<stdio.h>
#include<String.h>

void main()
{
int ns,i,j;
//ns=no. of students output
char N[50][50],t[25];

printf("ENTER THE NO. OF STUDENTS:");
scanf("%d",&ns);

for(i=0;i<ns;i++)
{
   scanf("%s",N[i]);
}

for(i=0;i<(ns-1);i++)
{
    for(j=i+1;j<ns;j++)
    {
        if(strcmp(N[i],N[j])>0)
        {
          strcpy(t,N[i]);
          strcpy (N[i],N[j]);
          strcpy (N[j],t);
        }
    }
}

for(i=0;i<ns;i++)
{
    printf("%s \n",N[i]);
}
}
