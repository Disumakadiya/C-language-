/*
name -DISU MAKADIYA
DATE -2-9-2024
aim- to compare of note
*/

#include<stdio.h>
void main()
{
int l1=0,l2=0,m,j,i;
char a1[70],a2[70];

printf("ENTER THE FIRST NOTE:");
gets(a1);

printf("ENTER THE SECOND NOTE:");
gets(a2);

for(i=0;a1[i]!='\0';i++)
{
    l1++;
}
printf("the first lenfth is %d",l1);
for(j=0;a2[j]!='\0';j++)
{
    l2++;
}
printf("\nthe second length is %d",l2);

for(i=0,j=0;i<=l1-1,j<=l2-1;l1++,l2++)
 {
    if(l1==l2)
    {
    if(a1[i]==a2[j])
    {
    printf("\nboth notes are same");
    break;
    }
    else
    {
        printf("\nboth notes have different char");
        break;
    }
    }
    else
    {
        printf("\nboth notes are different");
        break;
    }

  }
}
