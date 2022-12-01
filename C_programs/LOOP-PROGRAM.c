#include <stdio.h>

int main()
{
    char name[35] ; int choice;
    printf("Enter your name : ");
    scanf("%[^\n]s" ,&name);
    printf("Hello %s !This is a student entertainment program where you can see triangles ,\nso which triangle do you like normal or inverse? \n " , name);
    printf("\n");
    printf("Enter 1 for regular and enter 2 for inverse :  ");
    scanf("%d", &choice);
    printf("\n\n\n");
    switch(choice)
    {
        case 1:
            for (int i = 0 ; i<10 ; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;
        case 2:
            for (int i = 10 ; i>0 ; i-- )
            {
                for (int j = 0; j < i; j++)
                    printf("* ");
                printf("\n");
            }
            break;
        default:
            printf("\t WRONG INPUT \n");
    }
}