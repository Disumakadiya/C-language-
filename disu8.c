/*
Name:DISU MAKADIYA
date of program:26 july 2024
aim: to display the food menu
*/

#include<stdio.h>
void main()
{
    int Burger,Pizza,Frenchfries,Sandwich,Pasta,total,choice;
    int i,BillAmount;

    Burger=150;
    Pizza=200;
    Pasta=120;
    Sandwich=100;
    Frenchfries=80;
    total=0;

    x:printf("Menu \n (1) Burger-150 Rs.\n (2) Pizza-200 Rs.\n (3) Pasta-120 Rs.\n (4) Sandwich-100 Rs.\n (5) Frenchfries-80 Rs.\n (0) to exit\n ");
    printf("Enter food item for order:");
    fflush(stdin);
    scanf("%d",&i);
    switch(i)
    {
    case 0:
        printf("Total bill amount for ordered items:%d",BillAmount);
        break;
    case 1:
            BillAmount+=Burger;
            goto x;
    case 2:
            BillAmount+=Pizza;
            goto x;
    case 3:
            BillAmount+=Pasta;
            goto x;
    case 4:
            BillAmount+=Sandwich;
            goto x;
    case 5:
            BillAmount+=Frenchfries;
            goto x;
    }
    printf("name-disu makadiya id-24CE062");
}
