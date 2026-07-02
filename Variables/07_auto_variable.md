* What is an Auto Variable?

An auto variable is the default storage class for local variables in C.

If you declare a variable inside a function without specifying any storage class, it is automatically an auto variable.

These two statements are exactly the same:

int num = 10;
auto int num = 10;

* Explanation
auto int num = 10;
auto tells the compiler that num is an automatic local variable.
Memory is allocated when the function starts.
Memory is released when the function ends.

Today, programmers rarely write auto because it is implicit for local variables.

Memory Representation
display()

Stack Memory
----------------
num = 10
----------------

Function Ends

Stack Memory
----------------
Memory Released
----------------
* Real-World Example
void calculateBill()
{
    int total = 0;
}

Here, total is an auto variable, even though auto is not written.

* Embedded Systems Example
void ReadADC()
{
    int adcValue;

    // ADC Reading
}

adcValue is automatically an auto variable.

Advantages
Automatic memory management.
Fast allocation.
Easy to use.
Disadvantages
Value is lost after the function returns.
Cannot retain data between function calls.
Interview Questions
Q1. What is an auto variable?

A local variable with automatic storage duration.

Q2. Is auto mandatory?

No. Every local variable is an auto variable by default.

Q3. Where is an auto variable stored?

Stack Memory

Q4. What is its lifetime?

Only during function execution.

Comparison
Feature	Auto	Static
Lifetime	Function call	Entire Program
Memory	Stack	Data Segment
Value Retained	❌ No	✅ Yes
Practice Programs
Create an auto variable inside a function.
Compare auto and static variables.
Display an auto variable from two functions.
Print memory addresses of auto variables.
