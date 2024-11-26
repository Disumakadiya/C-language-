/*
name:DISU MAKADIYA
date:25-NOV'24
aim:a C program to read a text file ‘Demo.txt’ and print each word of that file
in reverse order.
*/

#include<stdio.h>
void main()
{
    FILE *file;
    char name[50],rev_note[50];
    int i,j,l=0;
    //open the file jn read mode
    file=fopen("Demo.txt","r");
    printf("Enter the word:");//enter the word 
    gets(name);
    fclose(file);
    file=fopen("Demo.txt","w");

  if(file==NULL)
     {
         printf("error!!file not found\n");//exist if file not found
     }
     else
     {
         //read the words from the file
         while(!feof(file))//stops when end of file 
             
    for(i=0; name[i]!='\0'; i++)
    {
        l++;//length of word
    }
    for(i=(l-1),j=0; i>=0; i--,j++)
    {
        //reverse the letter
        rev_note[j]=name[i];
    }
    rev_note[j]='\0';
    printf("Reverse note:");//print the letter in reverse form
    puts(rev_note);
     }
    fclose(file);//close file 
    printf("*********\n");
    printf("DISU MAKADIYA \n 24CE062");

}


