#include <stdio.h>  // basic funcionts
#include <string.h> // strcpy
#include <stdlib.h> //basic library

struct Student
{
    int class;
    char name[100];
};

int main()
{
    int no_of_students = 0, i = 0, number = 0;

    printf("Enter how many students are thre: ");
    scanf("%d", &no_of_students);

    struct Student student[100];

    FILE *fptr;

    // use appropriate location if you are using MacOS or Linux
    fptr = fopen("program.txt", "w");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    for (i = 0; i < no_of_students; i++)
    {
        printf("Enter name for student-%d : ", i + 1);
        scanf("%s", student[i].name);
        fprintf(fptr, "%s", student[i].name);
        fprintf(fptr, "%s", ",");

        printf("Enter class for student-%d : ", i + 1);
        scanf("%d", &student[i].class);
        fprintf(fptr, "%d", student[i].class);
        fprintf(fptr, "%s", ",");

        fprintf(fptr, "%s", "\n\n");
    }

    fclose(fptr);

    FILE *fptr2;
    fptr2 = fopen("program.txt", "r");
    char str;

    printf("\n\n\n\n-------PRINTING INTO TERMINAL-------\n\n\n");
    str = fgetc(fptr);
    while (str != EOF)
    {
        printf("%c", str);
        str = fgetc(fptr);
    }

    fclose(fptr2);

    return 0;
}