# Sizeof Operator in C

## Objective

Learn how to use the **sizeof** operator to determine the memory occupied by data types and variables.

---

# What is sizeof?

`sizeof` is a built-in operator in C that returns the memory occupied by a data type or variable in **bytes**.

It is widely used in C programming and Embedded Systems.

---

# Syntax

Using Data Type

```c
sizeof(int)
```

Using Variable

```c
int age = 23;

sizeof(age)
```

---

# Program

See **10_sizeof_operator.c**

---

# Sample Output

```text
Size of char         : 1 Byte
Size of int          : 4 Bytes
Size of float        : 4 Bytes
Size of double       : 8 Bytes

Size of Variables

num      : 4 Bytes
marks    : 4 Bytes
grade    : 1 Byte
salary   : 8 Bytes
```

---

# Code Explanation

### Size of Data Types

```c
sizeof(int)
```

Returns the size of an integer.

---

### Size of Variables

```c
sizeof(num)
```

Returns the size of the variable `num`.

---

# Memory Size Table

| Data Type | Typical Size |
|-----------|-------------:|
| char | 1 Byte |
| short | 2 Bytes |
| int | 4 Bytes |
| long | 4 or 8 Bytes |
| float | 4 Bytes |
| double | 8 Bytes |

> The exact size depends on the compiler and platform.

---

# Real-World Example

```c
char name[20];

printf("%zu", sizeof(name));
```

Useful for finding the total size of an array.

---

# Embedded Systems Example

```c
char buffer[128];

printf("%zu", sizeof(buffer));
```

Used for:

- Buffer allocation
- UART communication
- SPI communication
- Memory optimization
- DMA transfers

---

# Advantages

- Calculates memory automatically.
- Prevents hardcoding memory sizes.
- Useful for arrays, structures, and buffers.

---

# Limitations

- Data type sizes are implementation-dependent.
- Results may differ across platforms.

---

# Interview Questions

### 1. Is `sizeof` a function?

No.

It is an **operator**.

---

### 2. What does `sizeof()` return?

The size in **bytes**.

---

### 3. Can `sizeof()` be used with variables?

Yes.

Example

```c
sizeof(age)
```

---

### 4. Why is `sizeof` important in Embedded Systems?

It helps manage memory efficiently, especially when working with buffers, arrays, and hardware communication.

---

# Practice Programs

1. Print the size of all basic data types.
2. Print the size of variables.
3. Find the size of an array.
4. Find the size of a structure.

---

# Common Mistakes

❌ Assuming all systems have the same data type sizes.

Always use `sizeof()` instead of hardcoding values.

---

# Did You Know?

'sizeof(array)` returns the total size of the array in bytes, making it useful for calculating the number of elements:

```c
int arr[5];

size_t count = sizeof(arr) / sizeof(arr[0]);
```

---

# Key Takeaways

- `sizeof` is an operator.
- Returns size in bytes.
- Can be used with data types and variables.
- Helps write portable and efficient code.
- Essential for Embedded C programming.

---

## Next Step

🎉 **Operators Module Completed!**
