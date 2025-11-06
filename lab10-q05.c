#include <stdio.h>
#include <string.h>

typedef struct{
    float engl;
    float maths;
    float spanish;

} MARKS;
typedef  struct{
    char name[320];
    MARKS m;
    float total;
} STUDENT;
void fill_marks(MARKS* m){
    printf("English: ");
    scanf("%f",&m->engl);
    fflush(stdin);
    printf("Mathematics: ");
    scanf("%f",&m->maths);
    fflush(stdin);
    printf("Spanish: ");
    scanf("%f",&m->spanish);
    fflush(stdin);
}
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
void fill_stu(STUDENT *s){
    printf("student's Name: ");
    fgets(s->name,sizeof(s->name),stdin);
    rm_new_line(s->name);
    fill_marks(&s->m);
    printf("\n");
    s->total = (s->m.engl+s->m.maths+s->m.spanish)/3;
}
void print_spc(int n){
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }  
}

void display_stu_list(STUDENT *stu_lst,int n){
    float total=0;
    for (int i = 0; i < 88; i++)
    {
        printf("_");
    }
    printf("\n");
    printf("|\tNAME\t\t|\tENGLISH\t|\tMATHS\t|\tSPANISH\t|\tTOTAL\t|\n");
    printf("|");
    for (int i = 0; i < 87; i++)
    {
        printf("_");
    }
    printf("|\n");
    for (int i = 0; i < n; i++)
    {
        printf("|\t%s\t\t|\t%.2f\t|\t%.2f\t|\t%.2f\t|\t%.2f\t|\n",stu_lst->name,stu_lst->m.engl,stu_lst->m.maths,stu_lst->m.spanish,stu_lst->total);
        total += stu_lst->total;
        stu_lst++;
        
    }
    printf("|");
    for (int i = 0; i < 87; i++)
    {
        printf("_");
    }
    printf("|\n");
    printf("|\tAverage:\t%.2f\t\t\t\t\t\t\t\t|\n",total/n);
    printf("|");
    for (int i = 0; i < 87; i++)
    {
        printf("_");
    }    
    printf("|\n");
}
int main(){
    STUDENT stu_list[5];
    for (int i = 0; i < 2; i++)
    {
        fill_stu(&stu_list[i]);
    }
    display_stu_list(stu_list,2);
    return 0;
}