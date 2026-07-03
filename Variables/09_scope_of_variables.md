* What is Scope?

Scope is the region of a program where a variable can be accessed.

If a variable is outside its scope, it cannot be used.

Types of Scope
Block Scope
Function Scope
File Scope (Global Scope)

* Explaimation

1️⃣ Global Scope
int globalVar = 100;

Accessible from all functions.

2️⃣ Function Scope
int localVar = 20;

Accessible only inside display().

3️⃣ Block Scope
{
    int blockVar = 50;
}

Accessible only inside { }.

🚫 Invalid Example
{
    int x = 10;
}

printf("%d", x);

Output

Error: 'x' undeclared

Because x is outside its scope.

Memory Representation
Global Memory
--------------------
globalVar
--------------------

display()

Stack Memory
--------------------
localVar
--------------------

Block
--------------------
blockVar
--------------------
* Real-World Example

Think of a company:

* CEO → Global Scope (accessible by everyone)
* Department Manager → Function Scope
* Team Member → Block Scope

Each level has a different area of visibility.

* Embedded Systems Example
int systemStatus = 0;   // Global

void ReadSensor()
{
    int adcValue;        // Function Scope

    if(adcValue > 100)
    {
        int errorFlag = 1; // Block Scope
    }
}

This organization keeps code clean and reduces bugs.

Comparison Table
Scope	Accessible In	Lifetime
Block	{ } only	Block execution
Function	Function only	Function execution
Global	Entire file	Entire program
Advantages
Prevents accidental access.
Improves readability.
Makes debugging easier.
Supports modular programming.
Interview Questions
Q1. What is variable scope?

The region of a program where a variable can be accessed.

Q2. How many types of scope are there?
Block Scope
Function Scope
File (Global) Scope
Q3. Can a block variable be accessed outside its block?

No.

Q4. Which scope is the largest?

Global Scope

Practice Programs
Create a program using all three scopes.
Show that a block variable cannot be accessed outside the block.
Print a global variable from three functions.
Create nested blocks and observe variable scope.
