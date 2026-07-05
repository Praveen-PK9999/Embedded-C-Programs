#include <stdio.h>

int main()
{
    short int temperature = 25;
    short int speed = 120;
    short int marks = 98;

    printf("Temperature : %hd\n", temperature);
    printf("Speed       : %hd\n", speed);
    printf("Marks       : %hd\n", marks);

    printf("\nSize of short int : %zu Bytes\n", sizeof(short int));

    return 0;
}
