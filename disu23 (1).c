/*
NAME:Disu Makadiya
DATE OF EXECUTION:19-oct'24
AIM:to print fibonacci series with recursion
*/

#include<stdio.h>
int fibo(int n);
void main()
{
    int series,f,n;
    printf("ENTER THE NO. OF TERMS TO PRINT IN SERIES:");//input no.of terms in series
    scanf("%d",&series);

    for(n=0; n<series; n++)
    {
        f=fibo(n);//call Fibonacci function
        printf("%2d",f);
    }
    printf("\n-------");
    printf("--------\n");
    printf("DISU MAKADIYA \n 24CE062");
}

int fibo(int n)
{
    //n=no.of terms
    if(n==0 || n==1)//input as 0 and 1
        return n;
    else
        return fibo(n-1)+fibo(n-2);//returns addition as output value 

}