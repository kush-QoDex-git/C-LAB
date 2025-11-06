#include <stdio.h>
#include <time.h>
#include <string.h>
// typedef enum{
//     IT,
//     FINANCE,
//     MAINTAINANCE
// } Department;
// typedef enum{
//     Dep_HEAD,
//     Project_Manager,
//     DIRECTOR,
//     VICE_DIRECTOR
// } Designation;

typedef enum
{
    STILL_WORKING,
    LEFT
} Status;

typedef struct
{
    Status stat;
    char Emp_ID[5];
    char Emp_Name[25];
    char Department;
    char Designation;
    float Monthly_salary;
    struct
    {
        struct tm Date_of_joining;
        struct tm Date_of_leaving;
    } DATE;
} EMPLOYEE;

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

void Fill_Emp(EMPLOYEE *emp)
{
    printf("Enter Employee's ID: ");
    fgets(emp->Emp_ID, sizeof(emp->Emp_ID), stdin);
    fflush(stdin);
    rm_newline(emp->Emp_ID);

    printf("Enter Employee's name: ");
    fgets(emp->Emp_Name, sizeof(emp->Emp_Name), stdin);
    fflush(stdin);
    rm_newline(emp->Emp_Name);

    printf("Enter Employee's Department: ");
    fgets(emp->Department, sizeof(emp->Department), stdin);
    fflush(stdin);
    rm_newline(emp->Department);

    printf("Enter Employee's Designstion/post: ");
    fgets(emp->Department, sizeof(emp->Department), stdin);
    fflush(stdin);
    rm_newline(emp->Department);

    printf("Enter Employee's Monthly Salary: ");
    scanf("%f", &emp->Monthly_salary);
    fflush(stdin);

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);

    emp->DATE.Date_of_joining = *(local);
    emp->DATE.Date_of_leaving.tm_year = 1900;
}

void print_emp(EMPLOYEE *emp)
{
    char status[15];
    if (emp->stat = 0)
    {
        strcpy(status, "Still Working");
    }
    else
    {

        strcpy(status, "Left the organisation");
    }

    printf("\t\tID\t\tNAME\t\tDepartment\t\tDesignstion/post\t\tMonthly Salary\t\tSTATUS\n");
    printf("\t\t%s\t\t%s\t\t%s\t\t%s\t\t%f\t\t%s", emp->Emp_ID, emp->Emp_Name, emp->Department, emp->Designation, emp->Monthly_salary, status);
}
void left_org(EMPLOYEE *emp)
{
    emp->stat = 1;
}
void emp_joined_after_year(int year, EMPLOYEE *emp_list, int list_size)
{
    for (int i = 0; i < list_size; i++)
    {
        if (emp_list[i].DATE.Date_of_joining.tm_year + 1900 > year)
        {
            print_emp(&emp_list[i]);
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of employees you wanna add: ");
    scanf("%d", &n);
    fflush(stdin);
    EMPLOYEE emp_arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("\tFor Employee no.%d", i + 1);
        Fill_Emp(&emp_arr[i]);
    }
    int year;
    printf("Enter the year to get employees who joined after that year: ");
    scanf("%d", &n);
    fflush(stdin);
    emp_joined_after_year(year, emp_arr, n);

    return 0;
}