# Integer Data Type (`int`)

## Objective

Learn about the **`int`** data type, its syntax, memory size, range, and applications in C programming and Embedded Systems.

---

# What is `int`?

The **`int`** (integer) data type is used to store **whole numbers** (numbers without decimal points).

### Examples

```c
10
25
100
-50
0
```

---

# Syntax

### Declaration

```c
int age;
```

### Initialization

```c
int age = 23;
```

### Declaration and Initialization

```c
int marks = 95;
```

---

# Program

See **01_int.c**

---

# Sample Output

```text
Age    : 23
Marks  : 95
Salary : 25000
```

---

# Memory Size

| Property         | Value   |
| ---------------- | ------- |
| Data Type        | int     |
| Typical Size     | 4 Bytes |
| Format Specifier | `%d`    |

> **Note:** The size of `int` may vary depending on the compiler and system architecture.

---

# Range

For a typical **4-byte int**:

| Type         | Range                           |
| ------------ | ------------------------------- |
| Signed int   | -2,147,483,648 to 2,147,483,647 |
| Unsigned int | 0 to 4,294,967,295              |

---

# Code Explanation

```c
int age = 23;
```

Creates an integer variable named `age`.

```c
int marks = 95;
```

Stores the student's marks.

```c
printf("%d", age);
```

Prints an integer using the `%d` format specifier.

---

# Memory Representation

```
Memory

+-----------+
| age = 23  |
+-----------+

Size = 4 Bytes
```

---

# Real-World Example

```c
int studentId = 105;
int salary = 35000;
int totalMarks = 480;
```

---

# Embedded Systems Example

```c
int motorSpeed = 1500;
int temperature = 35;
int adcValue = 1023;
```

`int` is commonly used for counters, ADC values, timers, and calculations in embedded applications.

---

# Advantages

* Stores whole numbers efficiently.
* Fast arithmetic operations.
* Widely supported on all C compilers.

---

# Limitations

* Cannot store decimal values.
* Limited range compared to larger integer types.

---

# Interview Questions

### 1. What is an integer?

An integer is a whole number without a decimal point.

---

### 2. What is the format specifier for `int`?

`%d`

---

### 3. What is the typical size of an `int`?

Typically **4 Bytes**, but it depends on the compiler and platform.

---

### 4. Can an `int` store decimal values?

No. Use `float` or `double` for decimal numbers.

---

# Practice Programs

1. Store your age in an integer variable.
2. Store your roll number.
3. Add two integer numbers.
4. Find the average of three integers.
5. Swap two integers.

---

# Common Mistakes

❌ Using `%f` for an integer.

```c
printf("%f", age);
```

✅ Correct:

```c
printf("%d", age);
```

---

# Key Takeaways

* `int` stores whole numbers.
* `%d` is used to print integer values.
* The typical size is **4 Bytes**.
* Use `int` when decimal precision is not required.
* `int` is one of the most frequently used data types in C programming.

---

## Next Lesson

 **02_char.c** – Character Data Type
