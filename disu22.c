/*
Name:Disu Makadiya 
date:5 oct'24
aim:to calculate total,avg.,highest and lowest ccp  marks of given students 
*/


#include<stdio.h>

//function prototypes

float total_Marks(int n,Mark[]);
void avg_Marks(int n,Sum);
void highest_lowest_Marks(int n,Marks[]);


void main()
{
  int i,n,Marks[50],sum;
  printf("Enter the total no.of STUDENTS:-\n");
  scanf("%d",&n);
  printf("ENTER THE CCP MARKS OF STUDENTS-\n ");
 
for(i=0;i<n;i++)
 {
   printf("CCP marks of student %d :-\n",i+1);
   scanf("%d",&Marks[i]);
 }
 //total marks
sum=total_Marks(n,Marks);
//avg. marks
avg_Marks(sum,n);
//highest-lowest marks 
highest_lowest_Marks(n,Marks);
}

//function definition 
//Calculate total marks 
float total_Marks(int n,mark[])
{
 int i,Sum=0;
 for(i=0;i<=n;i++)
 {
   Sum=Sum+mark[i];
 }
 printf("total marks is %d\n",Sum);
 
 return Sum;
}

//Calculate Avg.Marks
void avg_Marks(int Sum,n)
{
    float Average=Sum/(float) n;
    printf("Average marks is %.2f\n",Average);
}

//find highest marks
void highest_lowest_Marks(int n,Marks[])
{
 int i,j,a;
 for(i=0;i<n-1;i++)
 {
   for(j=i+1;j<n;j++)
   {
       if(Marks[i]>Marks[j])
            {
                a=Marks[i];
                Marks[i]=Marks[j];
                Marks[j]=a;
            }
   }
 }
 printf("Highest Marks is %d\n",Marks[n-1]);
 printf("Lowest Marks is %d\n",Marks[0]);
}

