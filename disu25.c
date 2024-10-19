/*
name: DISU MAKADIYA
date of execution:18-oct'24
aim:Using union display data of library details
*/

#include<stdio.h>
//union as user defined function
union libraryDetail
{
  int num;
  char  book_Title[25];
  char author_Name[20];
  float book_Price;
  int Flag;
}l;//declared global variable

void main()
{

    printf("ENTER THE ACCESSION NUMBER OF LIBRARY:");//book no.
    scanf("%d",&l.num);
    printf("The accession no.of book is %d\n",l.num);

    printf("\nENTER THE BOOK TITLE:");//book title
    fflush(stdin);
    gets(l.book_Title);
    printf("The book title is:");
    puts(l.book_Title);

    printf("\nENTER THE AUTHER NAME:");//author name
    fflush(stdin);
    gets(l.author_Name);
    printf("The author name is :");
    puts(l.author_Name);

    printf("\nENTER THE BOOK PRICE:");//book price
    scanf("%f",&l.book_Price);
    printf("The book price is :%f",l.book_Price);

    printf("\nENTER THE FLAG NO.:");//for book issued
    scanf("%d",&l.Flag);
    printf("\n");

    //check book is available
    if(l.Flag==1)
        printf("BOOK IS ISSUED");
    else if(l.Flag==0)
        printf("BOOK IS NOT ISSSUED");
    else
        printf("INVALID DATA");

        printf("\nDISU MAKADIYA student id:24CE062");
}
