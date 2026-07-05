# Character Data Type (`char`)

## Objective

Learn about the **`char`** data type, memory size, ASCII values, and its applications in C programming and Embedded Systems.

---

# What is `char`?

The **`char`** data type is used to store a **single character**.

Examples:

```c
'A'
'B'
'1'
'#'
```

A character must always be enclosed in **single quotes (' ')**.

---

# Syntax

### Declaration

```c
char grade;
```

### Initialization

```c
char grade = 'A';
```

---

# Program

See **02_char.c**

---

# Sample Output

```text
Grade  : A
Gender : M
Symbol : #
```

---

# Memory Size

| Property | Value |
|----------|-------|
| Data Type | char |
| Typical Size | 1 Byte |
| Format Specifier | `%c` |

---

# ASCII Values

Every character has a corresponding ASCII value.

| Character | ASCII |
|-----------|------:|
| A | 65 |
| B | 66 |
| a | 97 |
| b | 98 |
| 0 | 48 |
| 1 | 49 |

---

# Program to Print ASCII Value

```c
#include <stdio.h>

int main()
{
    char ch = 'A';

    printf("Character : %c\n", ch);
    printf("ASCII     : %d\n", ch);

    return 0;
}
```

### Output

```text
Character : A
ASCII     : 65
```

---

# Code Explanation

```c
char grade = 'A';
```

Stores the character **A**.

```c
printf("%c", grade);
```

Prints the character.

```c
printf("%d", grade);
```

Prints the ASCII value.

---

# Memory Representation

```
Memory

+---------+
|  A (65) |
+---------+

Size = 1 Byte
```

---

# Real-World Example

```c
char grade = 'A';
char section = 'C';
char option = 'Y';
```

---

# Embedded Systems Example

```c
char receivedData;

receivedData = 'S';
```

Used in:

- UART Communication
- Bluetooth Modules
- LCD Displays
- Keypad Interfaces
- Serial Communication

---

# Advantages

- Uses only 1 Byte of memory.
- Ideal for storing single characters.
- Can also represent ASCII values.

---

# Limitations

- Stores only one character.
- Cannot store complete words or sentences.

---

# Interview Questions

### 1. What is the size of a char?

1 Byte.

---

### 2. What is the format specifier for char?

`%c`

---

### 3. What is ASCII?

ASCII (American Standard Code for Information Interchange) is a standard encoding that assigns numeric values to characters.

---

### 4. Can a char store numbers?

Yes.

Example:

```c
char ch = '5';
```

This stores the **character** `'5'`, not the integer `5`.

---

# Practice Programs

1. Print your first initial.
2. Print the ASCII value of your initial.
3. Input a character and display it.
4. Check whether the character is uppercase or lowercase.
5. Convert an uppercase letter to lowercase using ASCII.

---

# Common Mistakes

❌ Wrong

```c
char ch = "A";
```

(Double quotes create a string.)

✅ Correct

```c
char ch = 'A';
```

---

# Key Takeaways

- `char` stores a single character.
- Size is 1 Byte.
- `%c` prints a character.
- `%d` prints its ASCII value.
- Characters use **single quotes**.
- Widely used in Embedded Systems for communication protocols.

---

## Next Lesson

➡️ **03_float.c** – Floating Point Data Type
