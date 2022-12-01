#include <stdio.h>
#include <conio.h>

int main()
{
    char name[15];
    char section;
    int class;
    float avg_marks;
    printf("Dear student , please enter your details of future refernce\n ");

    printf("Please enter your name : \n");
    scanf("%s", &name);

    printf("Please enter your class \n");
    scanf("%d", &class);

    printf("Please enter your section : \n");
    scanf("%c", &section);
    section = getchar();

    printf(" Enter your avg marks : \n");
    scanf("%f", &avg_marks);

    printf("%s from section %c and class %d your avg marks is = %f ", name, section, class, avg_marks);
}