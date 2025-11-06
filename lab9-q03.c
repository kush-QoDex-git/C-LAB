#include <stdio.h>
#include <string.h>

typedef struct
{
    char city[20];
    char state[20];
    char pin_code[7];
} Address;

typedef struct
{

    char name[20];
    char roll[3];
    Address addr;
} Student;
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

void fill_stu(Student *stu)
{
    printf("\n\tEnter Student's Roll No.:\t");
    fgets(stu->roll, sizeof(stu->roll), stdin);
    rm_new_line(stu->roll);
    fflush(stdin);

    printf("\n\tEnter Student's Name:\t");
    fgets(stu->name, sizeof(stu->name), stdin);
    rm_new_line(stu->name);
    fflush(stdin);

    printf("\n\tEnter Student's Address:\n");
    printf("\t\tPIN Code : ");
    fgets(stu->addr.pin_code, sizeof(stu->addr.pin_code), stdin);
    rm_new_line(stu->addr.pin_code);
    fflush(stdin);

    printf("\n\t\tCITY : ");
    fgets(stu->addr.city, sizeof(stu->addr.city), stdin);
    rm_new_line(stu->addr.city);
    fflush(stdin);

    printf("\n\t\tSTATE : ");
    fgets(stu->addr.state, sizeof(stu->addr.state), stdin);
    rm_new_line(stu->addr.state);
    fflush(stdin);
}
void print_spc(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf(" ");
    }
}
void display_stu(Student *stu_list, int count)
{
    printf(" _______________________________________________________________________________________\n");
    printf("|");
    print_spc(87);
    printf("|\n");

    printf("|\tRoll No.\t|\t    NAME\t   |\t    ADDRESS \t\t\t|\n");
    printf("|_______________________________________________________________________________________|\n");
    for (int i = 0; i < count; i++)
    {
        printf("|         %s ", stu_list->roll);
        print_spc((13 - (strlen(stu_list->roll))));
        printf("|");
        printf("   %s ", stu_list->name);
        print_spc((22 - (strlen(stu_list->name))));
        printf("|");
        printf("   %s, %s, %s ", stu_list->addr.city, stu_list->addr.state, stu_list->addr.pin_code);
        print_spc((28 - (strlen(stu_list->addr.city) + strlen(stu_list->addr.state) + strlen(stu_list->addr.pin_code))));
        printf("|");
        printf("\n");
        stu_list++;
    }

    printf("|_______________________________________________________________________________________|\n");
}
int main()
{
    Student Stu_list[3];
    for (int i = 0; i < 1; i++)
    {
        printf("For Student No.%d", i + 1);
        fill_stu(&Stu_list[i]);
    }
    display_stu(Stu_list, 1);

    return 0;
}