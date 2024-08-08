/*
Name:DISU MAKADIYA
date of program:26 j#include uly 2024
aim:who is wealthier raman and suman
*/

#include<stdio.h>

void main()
{
    float rb,rp,rc;
    float sa,sh,sc;
    float rw,sw;

    //raman's wealth
    rb=12000000;
    rp=6000000;
    rc=3000000;
    //raman's wealth total
    rw=rb+rp+rc;
    printf("RAMAN'S WEALTH IS %f\n",rw);

    //suman's wealth
    sa=11000000;
    sh=8000000;
    sc=8000000;
    //suman's wealth total
    sw=sa+sh+sc;
    printf("SUMAN'S WEALTH IS %f\n",sw);

    //condition declared
    if(rw>sw)
    {
        printf("RAMAN IS WEALTHIER THAN SUMAN");
    }
    else if(sw>rw)
    {
        printf("SUMAN IS WEALTHIER THAN RAMAN");
    }
    else
    {
        printf("SUMAN AND RAMAN BOTH ARE EQUALLY WEALTHIER");
    }


}
