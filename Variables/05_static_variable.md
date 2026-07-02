* What is a Static Variable?
A static variable is a variable that retains its value between function calls.

Unlike a normal local variable, a static variable:

Is initialized only once.
Keeps its value until the program ends.
Has local scope (if declared inside a function) but program lifetime.

Why does this happen?
Normal Local Variable
int count = 0;

Every time the function is called:

count = 0
count++
Output = 1

So the output would be:

1
1
1
1

because the variable is recreated each time.

Static Variable
static int count = 0;

Memory is allocated only once.

Execution:

First Call
count = 0
count++
Output = 1

Second Call
count = 1
count++
Output = 2

Third Call
count = 2
count++
Output = 3

Fourth Call
count = 3
count++
Output = 4

* Memory Representation
Program Starts
        │
        ▼
Static Memory
------------------
count = 0
------------------
        │
Function Call
        ▼
count becomes 1
        │
Second Call
        ▼
count becomes 2
        │
Third Call
        ▼
count becomes 3

Unlike local variables, static variables are not destroyed after the function returns.


* Real-World Example

Imagine a website visitor counter.

void visitor()
{
    static int visitors = 0;

    visitors++;

    printf("Visitors = %d\n", visitors);
}

Every new visitor increases the counter, and the value is remembered.


* Embedded Systems Example

Suppose you're reading a sensor every second.

void ReadSensor()
{
    static int sampleCount = 0;

    sampleCount++;

    printf("Reading Number = %d\n", sampleCount);
}

This helps you track how many sensor readings have been taken without using a global variable.


* Advantages
Retains value between function calls.
Initialization happens only once.
Reduces unnecessary global variables.
Useful for counters, timers, and state tracking.

*  Disadvantages
Uses memory for the entire program.
Can make debugging harder if overused.

* Interview Questions
Q1. What is a static variable?

A variable that retains its value throughout the program execution even after the function exits.

Q2. Where is a static variable stored?

Answer:
Static/Data memory segment.

Q3. What is the lifetime of a static variable?

From program start until program termination.

Q4. What is the scope of a static local variable?

Only inside the function where it is declared.

* Practice Programs
Count how many times a function is called.
Create a login attempt counter.
Count button presses (simulation).
Count sensor readings.
