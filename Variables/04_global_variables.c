#include <stdio.h>

int count = 100;   // Global Variable

void display()
{
    printf("Inside display() : %d\n", count);
}

int main()
{
    printf("Inside main()    : %d\n", count);

    display();

    return 0;
}
