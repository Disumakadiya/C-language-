/*
Name:Disu Makadiya 
Date:29 July 2024
Aim:to display shape and colour with area 
*/


#include<stdio.h>

void main()
{
//declaring variable for area 
float a;
int l,s,b;

// allotting name to respective shapes
printf("(1)square\n(2)rectangle\n(3)circle\n(4)triangle");
scanf("%d",&s);

// printing shapes and finding area for the same
switch(s)
 {
 //to find area of square 
 case 1:
    printf("square");
    scanf("%d",&l);
    a=l*l;
    break;
    
  //to find area of rectangle  
 case 2:
    printf("rectangle");
    scanf("%d,%d",&l,&b);
    a=l*b;
    break;
   
  // to find area of circle
 case 3:
    printf("circle");
    scanf("%d",&l);
    a=3.14*l*l;
    break;
    
  //to find area of triangle   
 case 4:
    printf("triangle");
    scanf("%d,%d",&l,&b);
    a=0.5*l*b;
    break;
    
 }
 //declaring a variable for colour
 int n;
 
 //alloting name to respective colours
 printf("(1)red\n(2)blue\n(3)yellow");
 scanf("%d",&n);
 
 //Printing the nomes of colour and giving output 
   if(s==1 && n==1)
    printf("I have red square with area %f",a);
    
 
   else if(s==2 && n==1)
    printf("I have red rectangle with area %f",a);
 
   else if(s==3 && n==1)
    printf("I have red circle with area %f",a);
 
 
   else if(s==4 && n==1)
    printf("I have red triangle with area %f",a);
 
   else if(s==1 && n==2)
   printf("I have blue square with area %f",a);
 
   else if(s==2 && n==2)
   printf("I have blue rectangle with area %f",a);
 
   else if(s==3 && n==2)
   printf("I have blue circle with area %f",a); 
   
   else if(s==4 && n==2)
   printf("I have blue triangle with area %f",a);
 
   else if(s==1 && n==3)
   printf("I have yellow square with area %f",a);
 
   else if(s==2 && n==3)
   printf("I have yellow rectangle with area %f",a);
 
   else if(s==3 && n==3)
   printf("I have yellow circle with area %f",a);
 
   else
   printf("I have yellow triangle with area %f",a);
   
 //value alloted
}