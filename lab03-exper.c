#include <stdio.h>

int main(){
    char input[3];
    printf("Eter the grade: ");
    scanf("%s", &input);
    printf("%d", (input == "AA"));
    return 0;
}