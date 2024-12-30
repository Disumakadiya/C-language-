#include<stdio.h>
#include<math.h>
int amstrong_no(int n);

void main()
{
    int number;
    printf("ENTER THE NUMBER:");
    scanf("%d",number);

    if(amstrong_no(number))
    {
       printf("the entered no. is an amstrong number %d /n",number);
    }
    else
    {
        printf("entered no. is not an amstrong number %d /n",number);
    }
}

int amstrong_no(int n)
{
    int digits=0;
    int sum=0;
    int temp;
    int Number=n;
    temp=n;
    while(temp!=0)
    {
        digits++;
        temp/=10;
    }
    temp=n;
    while(temp!=0)
    {
        sum+=pow(temp%10,digits);
        temp/=10;
    }
    return sum==Number;

}
