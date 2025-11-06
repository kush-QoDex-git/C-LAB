#include <stdio.h>

typedef struct
{
    char rollno[4];
    char name[20];
    float marks[3];
} Student;

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

Student highestmarks(Student *s_arr, int n)
{
    Student h_s;
    float marks;
    float h_marks = 0;
    for (int i = 0; i < n; i++)
    {
        marks = s_arr[i].marks[0] + s_arr[i].marks[1] + s_arr[i].marks[2];
        if (marks > h_marks)
        {
            h_marks = marks;
            h_s = s_arr[i];
        }
    }
    return h_s;
}

void print_above_avg_marks(Student *s_arr, int n)
{
    Student avg_s;
    float marks;
    float avg_marks = 0;
    for (int i = 0; i < n; i++)
    {
        marks = s_arr[i].marks[0] + s_arr[i].marks[1] + s_arr[i].marks[2];
        avg_marks += marks;
    }
    avg_marks = avg_marks / n;

    printf("\n\tStudents with above average marks:");
    for (int i = 0; i < n; i++)
    {
        marks = s_arr[i].marks[0] + s_arr[i].marks[1] + s_arr[i].marks[2];
        if (marks > avg_marks)
        {
            printStu(&s_arr[i], 1);
        }
    }
}
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
void printStu(Student *s, int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("|\t%s\t|\t%s\t\t|\t%.2f\t|\t%.2f\t|\t%.2f\t|\n", s->rollno, s->name, s->marks[0], s->marks[1], s->marks[2]);
        s += 1;
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
    Student h_s;
    h_s = highestmarks(s_arr, n);
    printStu(&h_s, 1);
    print_above_avg_marks(s_arr, n);

    return 0;
}