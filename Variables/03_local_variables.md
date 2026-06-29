What is a Local Variable?

A local variable is a variable that is declared inside a function or block.

It can only be accessed within that function or block.
It is created when the function starts executing.
It is destroyed when the function finishes.

#Syntax
void display()
{
    int num = 10;   // Local Variable
}

Explanation
void display()
{
    int num = 10;
}
num is declared inside display().
It is called a local variable.
It exists only while display() is executing.
Example of an Error
#include <stdio.h>

void display()
{
    int num = 10;
}

int main()
{
    printf("%d", num);   // Error
    return 0;
}

❌ This program gives an error because num is local to display() and cannot be accessed from main().

🧠 Memory Representation
main()
     │
     ▼
display()
     │
     ▼
num = 10

After display() finishes, num is removed from memory.

🌍 Real-World Example

Suppose you're creating a calculator.

int add()
{
    int sum;

    // calculations

    return sum;
}

Here, sum is needed only inside add(), so it should be a local variable.

#Advantages
Prevents accidental modification from other functions.
Uses memory only when needed.
Makes programs easier to understand.
# Disadvantages
Cannot be shared between functions.
Exists only during function execution.
# Embedded Systems Example
void ReadTemperature()
{
    int adcValue;

    // Read ADC
}

adcValue is used only inside ReadTemperature(), so it should be local.

# Interview Questions
Q1. What is a local variable?

Answer:
A local variable is declared inside a function or block and can only be accessed within that function or block.

Q2. Where is a local variable stored?

Answer:
Typically on the stack.

Q3. What is the lifetime of a local variable?

Answer:
From the time the function is called until it returns.

Q4. Can one function access another function's local variable?

Answer:
No.

# Practice Programs

Create these yourself:

Store two numbers inside a function and print them.
Store your age inside a function.
Calculate the sum of two numbers using local variables.
Find the largest of two numbers using local variables.
