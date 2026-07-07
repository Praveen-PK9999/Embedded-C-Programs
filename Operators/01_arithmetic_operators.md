# Arithmetic Operators in C

## Objective

Learn how to perform basic mathematical operations using arithmetic operators in C.

---

# What are Arithmetic Operators?

Arithmetic operators are used to perform mathematical calculations on variables and constants.

---

# Types of Arithmetic Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `a * b` |
| `/` | Division | `a / b` |
| `%` | Modulus (Remainder) | `a % b` |

---

# Syntax

```c
result = operand1 operator operand2;
```

Example:

```c
sum = a + b;
```

---

# Program

See **01_arithmetic_operators.c**

---

# Sample Output

```text
First Number  : 20
Second Number : 10

Addition       : 30
Subtraction    : 10
Multiplication : 200
Division       : 2
Modulus        : 0
```

---

# Code Explanation

### Addition

```c
a + b
```

Adds two numbers.

---

### Subtraction

```c
a - b
```

Subtracts the second number from the first.

---

### Multiplication

```c
a * b
```

Multiplies two numbers.

---

### Division

```c
a / b
```

Divides one number by another.

**Note:** Integer division discards the fractional part.

Example:

```c
7 / 2 = 3
```

---

### Modulus

```c
a % b
```

Returns the remainder after division.

Example:

```text
10 % 3 = 1
15 % 4 = 3
20 % 5 = 0
```

---

# Memory Representation

```
a = 20
b = 10

a + b = 30
a - b = 10
a * b = 200
a / b = 2
a % b = 0
```

---

# Real-World Example

```c
int price = 500;
int quantity = 3;

int total = price * quantity;
```

Used for:

- Shopping bills
- Salary calculations
- Marks calculation

---

# Embedded Systems Example

```c
int adcValue = 512;

float voltage = (adcValue * 5.0) / 1023;
```

Arithmetic operators are used in:

- Sensor calculations
- PWM duty cycle
- Voltage conversion
- Temperature conversion
- Speed calculation

---

# Advantages

- Fast mathematical calculations.
- Easy to understand.
- Used in almost every C program.

---

# Limitations

- Division by zero is not allowed.
- Integer division loses the decimal part.

---

# Interview Questions

### 1. What are arithmetic operators?

Operators used for mathematical calculations.

---

### 2. How many arithmetic operators are available in C?

Five basic operators:

- `+`
- `-`
- `*`
- `/`
- `%`

---

### 3. What is the output of?

```c
7 / 2
```

Output:

```text
3
```

---

### 4. What is the output of?

```c
7 % 2
```

Output:

```text
1
```

---

# Practice Programs

1. Add two numbers.
2. Find the product of two numbers.
3. Find the remainder.
4. Calculate the average of three numbers.
5. Swap two numbers without using a third variable.

---

# Common Mistakes

❌ Division by zero

```c
int a = 10;
int b = 0;

printf("%d", a / b);
```

This causes undefined behavior.

---

# Did You Know?

 The modulus operator (`%`) works only with integer operands in C.

Example:

```c
10 % 3 = 1
```

---

# Key Takeaways

- Arithmetic operators perform mathematical operations.
- Integer division removes the decimal part.
- Modulus returns the remainder.
- Arithmetic operators are used extensively in Embedded Systems.
- Avoid division by zero.

---

## Next Lesson

➡️ **02_relational_operators.c** – Relational Operators
