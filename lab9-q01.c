#include <stdio.h>
#include <string.h>
#include <time.h>
typedef enum
{
    MID = 1,
    END
} TERM;
typedef struct
{
    char roll[3];
    char name[20];
} Student;
typedef struct
{
    struct tm time_date;
    Student stu;
    float marks;
    TERM term;
} RECORD;
void rm_new_line(char *str)
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
void print_spc(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf(" ");
    }
}
void menu();
void add_record()
{
    FILE *record_file = fopen("./record_file.dat", "ab");
    FILE *check_record_file = fopen("./record_file.dat", "rb");
    RECORD ch_rec;
    RECORD rec;
    printf("\n");
    printf("\tEnter Student's Roll No.: ");
    fgets(rec.stu.roll, sizeof(rec.stu.roll), stdin);
    rm_new_line(rec.stu.roll);
    fflush(stdin);

    printf("\n");
    printf("\tEnter Student's Name: ");
    fgets(rec.stu.name, sizeof(rec.stu.name), stdin);
    rm_new_line(rec.stu.name);
    fflush(stdin);

    printf("\n");
    printf("\tEnter 1 ->{for mid term}\t2 ->{for end term}: ");
    scanf("%d", &rec.term);
    fflush(stdin);

    while (fread(&ch_rec, sizeof(RECORD), 1, check_record_file))
    {

        if ((strcmp(ch_rec.stu.roll, rec.stu.roll) == 0) && (rec.term == ch_rec.term))
        {
            printf("\n\t\t! Student Record for This term Already Exists !\n");
            menu();
        }
    }

    printf("\n");
    printf("\tEnter Student's marks: ");
    scanf("%f", &rec.marks);
    fflush(stdin);

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    rec.time_date = *local;

    fwrite(&rec, sizeof(RECORD), 1, record_file);
    printf("\n\tRecord Added Successfully\n");
    fclose(record_file);
}
void display_record(int choice) // choice < -1 {for all records}, choice > -1 {for roll no. records}
{
    FILE *record_file = fopen("./record_file.dat", "rb");
    RECORD rec;
    char termstr[2][4] = {"MID", "END"};
    char stroll[3];
    if (choice > -1)
    {
        printf("\n\t Enter Roll No.: ");
        fgets(stroll, sizeof(stroll), stdin);
        rm_new_line(stroll);
        fflush(stdin);
    }
    printf(" _______________________________________________________________________________________\n");
    printf("|                       |                               |               |               |\n");
    printf("|\tRoll No.\t|\t\tNAME\t\t|\tTERM\t|\tMARKS\t|\n");
    printf("|-----------------------|-------------------------------|---------------|---------------|\n");
    while (fread(&rec, sizeof(RECORD), 1, record_file))
    {
        if (choice > -1 && (strcmp(stroll, rec.stu.roll) != 0))
        {
            continue;
        }

        printf("|\t   %s", rec.stu.roll);
        print_spc(13 - strlen(rec.stu.roll));
        printf("|    %s", rec.stu.name);
        print_spc(27 - strlen(rec.stu.name));
        printf("|\t%s ", termstr[rec.term - 1]);
        print_spc(7 - strlen(termstr[rec.term - 1]));
        printf("|\t%.2f   |\n", rec.marks);
    }
    printf("|_______________________|_______________________________|_______________|_______________|\n");
    fclose(record_file);
}

void update_marks()
{
    FILE *record_file = fopen("./record_file.dat", "rb");
    RECORD rec;
    float new_marks;
    char stroll[3];
    int stterm;
    printf("\n");
    printf("\tEnter Student's Roll No.: ");
    fgets(stroll, sizeof(stroll), stdin);
    rm_new_line(stroll);
    fflush(stdin);
    printf("\tEnter 1 ->{for mid term}\t2 ->{for end term}: ");
    scanf("%d", &stterm);
    fflush(stdin);
    printf("\n\tEnter New Marks: ");
    scanf("%f", &new_marks);
    int rec_index = 0;
    while (fread(&rec, sizeof(RECORD), 1, record_file))
    {
        if (rec.term == stterm && (strcmp(stroll, rec.stu.roll) == 0))
        {
            break;
        }

        rec_index++;
    }
    rec_index--;
    fclose(record_file);
    rec.marks = new_marks;
    record_file = fopen("./record_file.dat", "rb+");
    fseek(record_file, rec_index * sizeof(RECORD), SEEK_SET);
    fwrite(&rec, sizeof(RECORD), 1, record_file);
    fclose(record_file);
}
void menu()
{
    int choice;
    printf("\t _____________________________________\n");
    printf("\t|                                     |\n");
    printf("\t|     1. Add student record           |\n");
    printf("\t|     2. Display All Records          |\n");
    printf("\t|     3. Search record by Roll No.    |\n");
    printf("\t|     4. Update Marks of a record     |\n");
    printf("\t|                                     |\n");
    printf("\t|     0. Exit                         |\n");
    printf("\t|_____________________________________|\n");
    printf("\n\t\t\t\tChoose an option [Enter its corresponding number] : ");
    scanf("%d", &choice);
    fflush(stdin);
    switch (choice)
    {
    case 0:

        break;
    case 1:
        add_record();
        menu();
        break;
    case 2:
        display_record(-2);
        menu();
        break;
    case 3:
        display_record(1);
        menu();

        break;
    case 4:
        update_marks();
        menu();
        break;

    default:
        menu();
        break;
    }
}
int main()
{
    menu();

    return 0;
}