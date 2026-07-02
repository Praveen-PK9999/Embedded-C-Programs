#include <stdio.h>

int number = 100;      // Global Variable

extern int number;     // Extern Declaration

void display()
{
    printf("Number = %d\n", number);
}

int main()
{
    display();

    printf("Number = %d\n", number);

    return 0;
}
