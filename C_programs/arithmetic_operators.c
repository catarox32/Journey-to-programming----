#include<stdio.h>

int main()        
{
    int x = 0 , y = 0 , opred = 0; 
    char opr;
    printf("Input two numbers for perfroming any airthemtic operation : \n");
    scanf("%d%d" , &x , &y );
    
    printf("Enter a simple arithmetic operator + , - , / , * \n");
    scanf("%c" , &opr);
    opr =getchar();
    if(opr=='+')
    opred = x+y;
    else if(opr=='-')
    opred = x-y;
    else if(opr=='*')
    opred = x*y;
    else if(opr=='/')
    opred = x/y;
    else
    printf("WRONG INPUT \n");
    
    printf("Your desired value is %d\n" , opred);
    return 0;

}