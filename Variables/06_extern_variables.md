* What is an Extern Variable?

An extern variable is a global variable that is declared in one source file and accessed from another source file using the extern keyword.

It is mainly used in large projects where multiple .c files need to share the same variable.

Explanation
int number = 100;

This is the definition of the global variable.

extern int number;

This tells the compiler:

"The variable number exists somewhere. Don't create a new one; just use the existing variable.*"
 Real-World Example

* Imagine a smart home system.

main.c
    │
    ├── controls system
    │
sensor.c
    │
    ├── reads temperature
    │
display.c
    │
    ├── shows temperature

Instead of creating separate temperature variables, all files can use:

extern int temperature;
* Embedded Systems Example
// globals.c
int adcValue = 0;
// sensor.c
extern int adcValue;
// display.c
extern int adcValue;

The ADC value is shared between different modules.

Memory Representation
Global Memory
--------------------
number = 100
--------------------

        ▲
        │
extern accesses
        │
display()
main()

extern does not create new memory. It simply refers to an existing global variable.

Advantages
Share variables between source files.
Makes large projects modular.
Commonly used in embedded firmware.
Disadvantages
Excessive use can make code harder to maintain.
Global state can lead to bugs if modified carelessly.
Interview Questions
Q1. What is extern?

Answer:
extern is used to declare a variable that is defined in another source file.

Q2. Does extern allocate memory?

Answer:
No. It only declares the variable.

Q3. Where is extern mainly used?

Answer:
Large projects with multiple C source files.

Q4. Can extern be used with local variables?

Answer:
No. It is used with global variables.

Practice Programs
Create two C files and share one variable using extern.
Share a sensor value between files.
Share a counter between functions.
Share a configuration value across modules.
