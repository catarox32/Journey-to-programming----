#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    printf("Enter a line of letters \n");
    scanf("%[^\n]s" , &string);
    char name[] = "Ayush Halder";
    if(strcmp(name , string)==1)
        printf("welcome Mr.Halder \n");
    else
        printf("Wrong Password !\n");
}