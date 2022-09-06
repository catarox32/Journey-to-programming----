#include <stdio.h>

int main()
{
    int a = 0 , b = 0 , c= 0 ;
    for(int i = 1 ; i<11 ; i++)
    {
        a = i*4;
        printf(" 4 x %d is %d\n" , i , a);
    }
    for(int i = 1 ; i<11 ; i++)
    {
        b = i*5;
        printf(" 5 x %d is %d\n " , i , b);
    }
    for(int i = 1 ; i<11 ; i++)
    {
        c = i*6;
        printf(" 6 x %d is %d\n" , i , c);
    }
    return 0;
}