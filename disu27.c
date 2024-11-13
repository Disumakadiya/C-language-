/*
name:DISU MAKADIYA
aim:to swap the balance amount after a transaction
date of programme:11-nov'24
*/

//function prototype
void swap_Amount(double *,double *);

void main()
{
    //swap two amount
    double first_Balance,second_Balance;
    printf("ENTER THE FIRST BALANCE AFTER A TRANSACTION:");//input first amount
    scanf("%ld",&first_Balance);
    printf("ENTER THE SECOND BALANCE AFTER A TRANSACTION:");//input sec. amount
    scanf("%ld",&second_Balance);
    printf("-------\n");

    swap_Amount(&first_Balance,&second_Balance);//function call

    printf("After transaction, first balance:%ld",first_Balance);
    printf("\nAfter transaction, second balance:%ld\n",second_Balance);

    printf("************\n");
    printf("DISU MAKADIYA \n 24CE062");

}

//function define
void swap_Amount(double *firstAmount,double *secondAmount)
{
    double temp;//to store one variable

    temp=*firstAmount;
    *firstAmount=*secondAmount;
    *secondAmount=temp;
}