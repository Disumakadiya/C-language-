/*
name:disu makadiya
date:4 oct'24
aim:find area of triangle using heron's formula
*/

#include<stdio.h>
#include<math.h>
float area(float,float,float);
float s(float,float,float);
void main()
{
    float a,b,c;
    printf("ENTER THE LENGTH OF ONE SIDE a:");
    scanf("%f",&a);
    printf("ENTER THE LENGTH OF SECOND SIDE b:");
    scanf("%f",&b);
    printf("ENTER THE LENGTH OF THIRD SIDE c:");
    scanf("%f",&c);

    if(a+b>c && b+c>a && a+c>b)
    {
        printf("THE GIVEN LENGTH CAN FORM A TRIANGLE\n");
        printf("the area of given triangle is %f",area(a,b,c));
    }
    else
    {
        printf("THE TRIANGLE IS INVALID");
    }
}

float area(float s1,float s2,float s3)
{
    float sa,area;
    sa=s(s1,s2,s3);
    area=sqrt(sa*(sa-s1)*(sa-s2)*(sa-s3));
    return area;

}

float s(float s1,float s2,float s3)
{
    float s;
    s=(s1+s2+s3)/2;
    return s;
}
