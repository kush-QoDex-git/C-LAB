#include <stdio.h>

void ps(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}
void rm_newline(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
        }
        i++;
    }
}

typedef enum
{
    eng,
    maths,
    science
} SUB;
typedef struct
{
    char rollno[4];
    char name[20];
    float marks[3];
} Student;

void fillStudent(Student *s)
{

    printf("Enter name: ");
    fgets(s->name, sizeof(s->name), stdin);
    rm_newline(s->name);
    fflush(stdin);
    printf("Enter roll number: ");
    fgets(s->rollno, sizeof(s->rollno), stdin);
    rm_newline(s->rollno);
    fflush(stdin);
    printf("Enter english, Maths & Science marks in the same order: ");
    scanf("%f %f %f", &s->marks[0], &s->marks[1], &s->marks[2]);
    fflush(stdin);
}

void printStu(Student *s,int n)
{
    printf("\n");
    printf(" _________________________________________________________________________\n");
    printf("|    rollNo.   |          Name            |               Marks           |\n");
    printf("|              |                          |   English  |  Maths  | Science|\n");
    printf("|______________|__________________________|____________|_________|________|\n");
    for (int i = 0; i < n; i++)
    {
        printf("|\t%s\t|\t%s\t\t|\t%.2f\t|\t%.2f\t|\t%.2f\t|\n", s->rollno, s->name, s->marks[0], s->marks[1], s->marks[2]);
        s+=1;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of students you wanna add: ");
    scanf("%d", &n);
    fflush(stdin);

    Student s_arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("\t\tFor Student no.%d\n", i + 1);
        fillStudent(&s_arr[i]);
    }
    printStu(s_arr,n);
    

    return 0;
}