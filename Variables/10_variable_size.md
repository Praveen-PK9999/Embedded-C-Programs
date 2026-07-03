* What is sizeof?

The sizeof operator is used to determine the memory occupied by a variable or data type.

Syntax
sizeof(variable);

or

sizeof(data_type);

Explanation
sizeof(age)

Returns the size of the variable age.

sizeof(int)

Returns the size of the int data type.

Both are valid.

Memory Representation
Data Type	Typical Size
char	1 Byte
int	4 Bytes
float	4 Bytes
double	8 Bytes
long long	8 Bytes

Note: These are common values on modern systems. The C standard allows implementations to choose different sizes.

* Real-World Example

If an embedded system has only 2 KB RAM, knowing how much memory each variable uses helps you write efficient programs.

Example:

char sensorState;

uses much less memory than:

int sensorState;
* Embedded Systems Example
uint8_t ledState;
uint16_t adcValue;

Using the smallest suitable data type saves RAM, which is very important in microcontrollers.

Advantages
Helps optimize memory usage.
Useful in embedded systems.
Helps understand data type sizes.
Useful for arrays, structures, and dynamic memory.
Interview Questions
Q1. What is sizeof?

sizeof is an operator that returns the size of a variable or data type in bytes.

Q2. Does sizeof return bits or bytes?

Bytes.

Q3. Can we use sizeof(int)?

Yes.

Example:

printf("%zu\n", sizeof(int));
Q4. Is the size of int always 4 bytes?

No.

It depends on the compiler and system architecture, although 4 bytes is common on modern systems.

Practice Programs
Print the size of all basic data types.
Find the size of an array.
Find the size of a structure.
Compare the sizes of int, short, and long.
