#include <stdio.h>
#include <string.h>

typedef struct
{
    char d_name[20];
    char head_name[20];
} DEPARTMENT;
typedef struct
{
    char com_name[20];
    DEPARTMENT dep_list[20];
} COMPANY;
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
void fill_company(COMPANY *comp)
{
    printf("Enter Caompany Name: ");
    fgets(comp->com_name, sizeof(comp->com_name), stdin);
    rm_new_line(comp->com_name);
    char ans = 'y';
    int i = 0;
    while (ans == 'y' || ans == 'Y')
    {
        printf("Enter Name for Department %d: ", i + 1);
        fgets(comp->dep_list[i].d_name, sizeof(comp->dep_list[i].d_name), stdin);
        rm_new_line(comp->dep_list[i].d_name);
        printf("Enter Name of HOD for %s: ", comp->dep_list[i].d_name);
        fgets(comp->dep_list[i].head_name, sizeof(comp->dep_list[i].head_name), stdin);
        rm_new_line(comp->dep_list[i].head_name);

        printf("\nAnother Department [y/n]: ");
        scanf("%c", &ans);
        fflush(stdin);
        i++;
    }
}
void print_spc(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}
void display_comp(COMPANY *comp, int n)
{
    int j;
    printf(" ____________________________________________________________________________\n");
    printf("|         COMPANY         |              DEPARTMENT : HOD                    |\n");
    printf("|-------------------------|--------------------------------------------------|\n");
    for (int i = 0; i < n; i++)
    {
        printf("|");
        print_spc(12 - ((strlen(comp->com_name)) / 2));
        printf("%s", comp->com_name);
        print_spc(25 - (12 - ((strlen(comp->com_name)) / 2) + (strlen(comp->com_name))));
        printf("|");
        j = 0;
        while (comp->dep_list[j].d_name[1] != '\0')
        {
            if (j != 0)
            {
                printf("|");
                print_spc(25);
                printf("|");
            }
            print_spc(24 - ((strlen(comp->dep_list[j].d_name))));
            printf("%s : %s", comp->dep_list[j].d_name, comp->dep_list[j].head_name);
            print_spc(23 - (strlen(comp->dep_list[j].head_name)));
            printf("|\n");
            j++;
        }
        if (i != (n - 1))
        {
            printf("|-------------------------|--------------------------------------------------|\n");
        }

        comp++;
    }
    printf("|_________________________|__________________________________________________|\n");
}

int main()
{
    COMPANY com_list[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\n\tFor company no. :%d\n",i+1);
        fill_company(&com_list[i]);
    }
    display_comp(com_list, 3);

    return 0;
}