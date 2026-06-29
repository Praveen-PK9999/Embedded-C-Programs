#include <stdio.h>

int main()
{
    int age;
    float cgpa;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n----- Student Details -----\n");
    printf("Age   : %d\n", age);
    printf("CGPA  : %.2f\n", cgpa);
    printf("Grade : %c\n", grade);

    return 0;
}
