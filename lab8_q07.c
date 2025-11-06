#include <stdio.h>

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
void add_record_to_DB(Student *stu)
{
    FILE *db_file = fopen("./student_database.dat", "ab");
    fwrite(stu, sizeof(Student), 1, db_file);
    fclose(db_file);
}

void menu()
{
    printf("\n _______________________________________________________________________\n");
    printf("|                                                                          |\n");
    printf("|         1. ADD record                         2. Display All records     |\n");
    printf("|         3. Search Student by Roll No.         4. update a record         |\n");
    printf("|                                                                          |\n");
    printf("|                                               5.EXIT                     |\n");
    printf("|__________________________________________________________________________|\n");
    int choice;
    printf("Choose an option from abvoe and enter its corresponding number: ");
    scanf("%d", &choice);
    fflush(stdin);

    Student stu;
    FILE *dbfile = fopen("./student_database.dat", "rb");
    char rolln[4];
    switch (choice)
    {
    case 1:
        fillStudent(&stu);
        add_record_to_DB(&stu);
        menu();
        break;
    case 2:
        while (fread(&stu, sizeof(Student), 1, dbfile))
        {
            printStu(&stu, 1);
        }
        menu();
        break;
    case 3:
        printf("\tEnter the Roll No. : ");
        fgets(rolln, sizeof(rolln), stdin);
        fflush(stdin);
        while (fread(&stu, sizeof(Student), 1, dbfile))
        {
            if (strcmp(rolln, stu.rollno) == 0)
            {
                printStu(&stu, 1);
                break;
            }
        }
        menu();
        break;
    case 4:
        printf("\tEnter the Roll No. : ");
        fgets(rolln, sizeof(rolln), stdin);
        fflush(stdin);
        while (fread(&stu, sizeof(Student), 1, dbfile))
        {
            if (strcmp(rolln, stu.rollno) == 0)
            {
                printf("Enter New Marks for English, Maths, Science : ");
                scanf("%f %f %f", stu.marks[0], stu.marks[1], stu.marks[2]);
                break;
            }
        }
        menu();
        break;
    case 5:
        break;
    default:
        menu();
        break;
    }
}
int main()
{

    return 0;
}