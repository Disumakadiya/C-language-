/*
name:DISU MAKADIYA
aim:read the marks of ccp of students
date of programme:11-nov'24
*/

#include<stdio.h>
#
void main()
{
    //using array to take input of ccp marks
    int marks[10],*m;
    int i;
    int Distinction_class=0,first_class=0,pass=0,fail=0;//pointers to count

    m=&marks[0];//address of index 0 pointer
    for(i=0; i<10; i++,m++)
    {
        printf("enter the %d mark:",i+1);//input taken of 10 students marks
        scanf("%d",m);
    }
    m=&marks[0];

    for(i=0;i<10;i++,m++)
    {
        if(*m>=70)
        {
            Distinction_class++;//count total no.of distinction class
        }
        else if(*m>=60)
        {
            first_class++;//count total no.of first class
        }
        else if(*m>=60)
        {
            pass++;//count total no.of pass students
        }
        else
        {
            fail++;//count no. of fail in class
        }
    }
    printf("---------");
    printf("---------");

    //output as total count
    printf("total no. of DISTINCTION:%d\n",Distinction_class);
    printf("total no. of FIRST CLASS:%d\n",first_class);
    printf("total no. of PASS:%d\n",pass);
    printf("total no. of FAIL:%d\n",fail);

    printf("************\n");
    printf("DISU MAKADIYA \n 24CE062");

}