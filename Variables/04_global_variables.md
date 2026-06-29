What is a Global Variable?

A global variable is declared outside all functions. It can be accessed by all functions in the same file.

Characteristics
Declared outside any function.
Accessible by all functions.
Created when the program starts.
Destroyed when the program ends.

Explanation
int count = 100;
Declared outside all functions.
It is a global variable.
void display()
{
    printf("%d", count);
}

The display() function can access count.

int main()
{
    printf("%d", count);
}

The main() function can also access the same variable.

# Memory Representation
Global Memory
------------------
count = 100
------------------

        │
   ┌────┴────┐
   │         │
main()   display()

The same variable is shared by both functions.
# Real-World Example

In an embedded system:

int systemStatus = 0;

Many functions may need to check or update the system status, so a global variable is useful.

# Advantages
Accessible from multiple functions.
Easy to share data.
Useful for system-wide information.
# Disadvantages
Any function can modify it.
Makes debugging harder if overused.
Reduces modularity.
# Interview Questions
Q1. What is a global variable?

Answer:
A variable declared outside all functions that can be accessed by every function in the file.

Q2. Where is a global variable stored?

Answer:
In the Data Segment (or BSS if uninitialized).

Q3. What is the lifetime of a global variable?

Answer:
From the start of the program until it terminates.

Q4. Can a local variable have the same name as a global variable?

Answer:
Yes. The local variable hides (shadows) the global variable within its scope.

Example:

#include <stdio.h>

int value = 50;

int main()
{
    int value = 100;

    printf("Local  : %d\n", value);
    printf("Global : %d\n", ::value);   // Not valid in C (valid in C++)
    
    return 0;
}

Note: Unlike C++, C does not have the :: scope resolution operator. To access a hidden global variable in C, you should avoid using the same name for a local variable or redesign the code.

📝 Practice Programs
Print a global variable from three different functions.
Increment a global counter in multiple functions.
Use a global variable to count function calls.
Compare local and global variables with different names.
