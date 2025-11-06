#include <stdio.h>
#include <string.h>
typedef struct
{
    char id[4];
    char name[20];
    char designation[20];
    float salary;
} EMPLOYEE;

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

void fill_emp(EMPLOYEE *emp)
{
    printf("\n\tEnter Employee ID:\t");
    fgets(emp->id, sizeof(emp->id), stdin);
    rm_new_line(emp->id);
    fflush(stdin);

    printf("\n\tEnter Employee Name:\t");
    fgets(emp->name, sizeof(emp->name), stdin);
    rm_new_line(emp->name);
    fflush(stdin);

    printf("\n\tEnter Employee Designation:\t");
    fgets(emp->designation, sizeof(emp->designation), stdin);
    rm_new_line(emp->designation);
    fflush(stdin);

    printf("\n\tEnter Employee Salary:\t");
    scanf("%f", &emp->salary);
    fflush(stdin);
}
void print_spc(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf(" ");
    }
}
void display_emp(EMPLOYEE *emp, int count)
{
    printf(" ________________________________________________________________________________________\n");
    printf("|");
    print_spc(88);
    printf("|\n");
    
    printf("|\tID\t|\t    NAME\t   |\t    DESIGNATION\t      |\t    SALARY\t|\n");
    printf("|_______________________________________________________________________________________|\n");
    for (int i = 0; i < count; i++)
    {
        printf("|      %s ", emp->id);
        print_spc((8 - (strlen(emp->id))));
        printf("|");
        printf("   %s ", emp->name);
        print_spc((22 - (strlen(emp->name))));
        printf("|");
        printf("   %s ", emp->designation);
        print_spc((22 - (strlen(emp->designation))));
        printf("|");
        printf("   %.2f ", emp->salary);
        printf("\n");
        emp++;
    }
    printf("|");
    print_spc(88);
    printf("|\n");
    printf("|_______________________________________________________________________________________|\n");
}
int main()
{
    EMPLOYEE emp_list[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n\tFor Employee %d\n", i + 1);
        fill_emp(&emp_list[i]);
    }

    // EMPLOYEE e1 = {"101", "erer", "ertr", 12121};
    display_emp(emp_list, 5);
    return 0;
}