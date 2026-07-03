#include <stdio.h>

int globalVar = 100;      // Global Scope

void display()
{
    int localVar = 20;     // Function Scope

    printf("Global Variable : %d\n", globalVar);
    printf("Local Variable  : %d\n", localVar);

    {
        int blockVar = 50; // Block Scope

        printf("Block Variable : %d\n", blockVar);
    }

    // printf("%d", blockVar); // Error
}

int main()
{
    display();

    printf("Global Variable : %d\n", globalVar);

    return 0;
}
