/*
name: DISU MAKADIYA
date of execution:18-oct'24
aim:display details of books
*/

#include<stdio.h>

//using user defined function
struct bookDetail
{
  char  book_Title[25];
  char author_Name[20];
  float book_Amount;

};

//sturct as function argrument
void details_Book(struct bookDetail);

void main()
{
    struct bookDetail b;

    printf("ENTER THE BOOK NAME:");//book name
    gets(b.book_Title);
    printf("ENTER THE AUTHOR NAME:");//author name
    gets(b.author_Name);
    printf("ENTER THE AMOUNT OF BOOK:");//price of book
    scanf("%f",&b.book_Amount);

    details_Book(b);//struct function call

  printf("******\n");
    printf("DISU MAKADIYA \n student id:24CE062");
}

//struct as function definition
void details_Book(struct bookDetail a)
{
    //passing struct as function argument
    printf("DISPLAY THE BOOK NAME:");
    puts(a.book_Title);
    printf("DISPLAY THE AUTHOR NAME:");
    puts(a.author_Name);
    printf("the book Amount is %.2f",a.book_Amount);
}


