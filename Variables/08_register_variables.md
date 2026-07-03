* What is a Register Variable?

A register variable is a variable that is requested to be stored in the CPU register instead of RAM for faster access.

Important: The register keyword is only a request to the compiler. The compiler may ignore it if there are not enough CPU registers available.

Explanation
register int i;
Requests the compiler to store i in a CPU register.
Register access is generally faster than RAM access.
Useful for variables that are accessed repeatedly, such as loop counters.

* Important Rule

You cannot take the address of a register variable.

❌ Incorrect:

register int x = 10;

printf("%p", &x);

This will produce a compilation error.

Memory Representation
CPU Register
-------------
i = 1
-------------

If a register is unavailable, the compiler stores the variable in normal memory.


* Real-World Example
for(register int i = 0; i < 1000; i++)
{
    // Process data
}

* Embedded Systems Example
register int counter;

for(counter = 0; counter < 100; counter++)
{
    // Read sensor values
}

Loop counters in embedded firmware are a common place where this keyword appears in older code.

Advantages
Faster variable access (if placed in a register).
Suitable for frequently used variables.
Commonly seen in legacy embedded code.
Disadvantages
Modern compilers usually optimize register allocation automatically.
You cannot use the address-of (&) operator on a register variable.

* Interview Questions
Q1. What is a register variable?

A variable that requests storage in a CPU register for faster access.

Q2. Can we use & with a register variable?

No.

Q3. Is the compiler required to store it in a register?

No. It is only a request.

Q4. Where is it mainly used?

Loop counters and frequently accessed variables, especially in older C code.

Comparison Table
Feature	Auto	Register
Default Storage	Stack	CPU Register (if possible)
Speed	Normal	Faster (if allocated to a register)
Address (&)	Allowed	Not Allowed
Lifetime	Function	Function

* Practice Programs
Print numbers 1–10 using a register variable.
Find the sum of the first 100 numbers using a register loop counter.
Print the multiplication table of a number using a register variable.
Try using & with a register variable and observe the compiler error.
