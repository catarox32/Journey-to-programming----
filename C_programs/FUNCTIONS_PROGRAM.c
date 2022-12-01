// #include <stdio.h>

// int main()
// {
//     float a = 53981713871.98998 ; int b = 69696969 ; double c = 420.0 ; 
//     printf("The size float is %d\n"  , sizeof(float));
//     printf("The size integer is %d\n"  , sizeof(int));
//     printf("The size double is %d\n"  , sizeof(double));
// }

#include <stdio.h>

int toFact(int Val);
int toSquare(int Val);
int findEven(int Val);

int main()
{
    int user_Value, user_Choice, user_Choice_2 , n=6;
    printf("Please enter the number according to the menu : -");
    printf("\n\tEnter 1 to Find Factorial ");
    printf("\n\tEnter 2 to Find Square ");
    printf("\n\tEnter 3 to Find Even or Odd ");
    printf("\n\n PLEASE ENTER YOUR CHOICE : ");
    scanf("%d", &user_Choice);
    while(n!=5)
    {
        switch (user_Choice)
        {
        case 1:
            printf("Please enter your number to find out the factorial : ");
            scanf("%d", &user_Value);
            printf("The factorial of your number is = %d", toFact(user_Value));
            break;
        case 2:
            printf("Please enter your number to find out the square : ");
            scanf("%d", &user_Value);
            printf("\n\n\n\n\n\n\n\nThe Square of your number is = %d", toSquare(user_Value));
            break;
        case 3:
            printf("\n\n\n\n\n\n\n\nPlease enter your number to find out it's even or odd' : ");
            scanf("%d", &user_Value);
            if (findEven(user_Value) == 1)
                printf("\n\n\n\nThe number %d is even !", user_Value);
            else if (findEven(user_Value) == 0)
                printf("\n\n\n\nThe number %d is odd !", user_Value);
            break;
        default:
            printf("\n\tWRONG INPUT !!!");

        }
        printf("\n\nIf you want to continue please enter 1 or to exit enter 2 : ");
        scanf("%d", &user_Choice_2);
        if (user_Choice_2==1)
            n++;
        else if(user_Choice_2==2)
            n=6;
        else
        break; 
    }
}

int toFact(int Val)
{
    int fact = 1;
    for (int i = 1; i <= Val; i++)
        fact *= i;
    return fact;
}
int toSquare(int Val)
{
    int square = Val * Val;
    return square;
}
int findEven(int Val)
{
    if (Val % 2 == 0)
        return 1;
    else if (Val == 0)
        return 3;
    else
        return 0;
}