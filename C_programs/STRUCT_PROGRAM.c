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

    for (i = 0; i < no_of_students; i++)
    {
        printf("Enter name for student-%d : ", i + 1);
        scanf("%s", student[i].name);

        printf("Enter class for student-%d : ", i + 1);
        scanf("%d", &student[i].class);
    }

    printf("Please Enter The number of the student whose details that you want : ");
    scanf("%d",&number);

    printf("Name : %s", student[number-1].name);
    printf("Class : %d", student[number-1].class);

    return 0;
}