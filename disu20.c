
/*
name:DISU MAKADIYA
date:16 sep'24
aim:to find avg.of student's grade
*/

#include<stdio.h>

void message();
//no returntype no parameter
int students();
// no parameter
void grade(int [],int);
// no return type
float avg(int[],int);
// with returntype and parameter

void main()
{
    int ns,i,G[50];
    float average;
    //ns=total no.of students
    message();
    ns=students();
    for(i=0;i<ns;i++)
    {
    //display the grades
    printf("enter your grade : ");
     scanf("%d",&G[i]);
    }
    grade(G,ns);
    //call avg. function
    average=avg(G,ns);
    printf("%f\n",average);
}

void message()
{
    printf("WELCOME TO CHARUSAT UNIVERSITY\n");
    printf("----\n");
    printf("----\n");
}

int students()
{
    int n;
    printf("ENTER THE NO. OF STUDENTS :");
    scanf("%d",&n);
    printf(" \n");
    return n;
}

void grade(int s[],int x)
//x=no. of students taken
//s=grade stored array
{
    int i;
    for(i=0;i<x;i++)
    {
        printf("grade of (%d) student :%d\n",i+1,s[i]);
    }
}
float avg(int b[],int y)
//y=total student's grade
//b=stored average
{
    int i,w;
    float r;
    //w=avg. grade
    for(i=0;i<y;i++)
    {
        w=w+b[i];
    }
     r=(float) w/y;
     //r=avg.written
    return r;
}


