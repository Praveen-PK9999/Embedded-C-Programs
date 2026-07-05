# Short Integer Data Type (`short`)

## Objective

Learn about the `short` data type, its memory size, range, syntax, and applications in C programming and Embedded Systems.

---

# What is `short`?

The `short` (or `short int`) data type is used to store integer values while using **less memory** than a typical `int` on many systems.

Example:

```c
short int temperature = 25;
```

---

# Syntax

### Declaration

```c
short int number;
```

or simply

```c
short number;
```

### Initialization

```c
short int marks = 98;
```

---

# Program

See **05_short.c**

---

# Sample Output

```text
Temperature : 25
Speed       : 120
Marks       : 98

Size of short int : 2 Bytes
```

---

# Memory Size

| Property | Value |
|----------|-------|
| Data Type | short int |
| Typical Size | 2 Bytes |
| Format Specifier | `%hd` |

> **Note:** The C standard guarantees that `short` is at least 16 bits. On most modern systems it is 2 bytes.

---

# Typical Range

| Type | Range |
|------|----------------|
| signed short | -32,768 to 32,767 |
| unsigned short | 0 to 65,535 |

---

# Code Explanation

```c
short int temperature = 25;
```

Stores the value **25** using a short integer.

```c
printf("%hd", temperature);
```

Prints a short integer.

```c
sizeof(short int)
```

Returns the size of the data type in bytes.

---

# Memory Representation

```
Memory

+-----------+
|    25     |
+-----------+

Size = 2 Bytes
```

---

# Real-World Example

```c
short studentAge = 20;
short batteryLevel = 85;
```

---

# Embedded Systems Example

```c
short sensorValue = 512;
short rpm = 1500;
```

Useful for storing:

- ADC readings
- Sensor values
- Counters
- Timer values

---

# Advantages

- Uses less memory than many `int` implementations.
- Suitable for small integer values.
- Helpful in memory-constrained systems.

---

# Limitations

- Smaller range than larger integer types.
- Can overflow if values exceed its range.

---

# Comparison

| Feature | short | int |
|---------|------:|----:|
| Typical Size | 2 Bytes | 4 Bytes |
| Memory Usage | Lower | Higher |
| Range | Smaller | Larger |

---

# Interview Questions

### 1. What is the typical size of `short`?

Typically **2 Bytes**.

---

### 2. What is the format specifier for `short`?

`%hd`

---

### 3. Why use `short`?

To reduce memory usage when a smaller integer range is sufficient.

---

### 4. Is `short` always 2 bytes?

No. The C standard only guarantees that it is at least 16 bits, though it is commonly 2 bytes.

---

# Practice Programs

1. Store your age using `short`.
2. Print the size of `short`.
3. Compare `short` and `int`.
4. Store a sensor value using `short`.

---

# Common Mistakes

❌ Storing a value outside the range:

```c
short number = 50000;
```

This may overflow.

---

# Did You Know?

 Choosing the smallest suitable data type is a common optimization in embedded systems because microcontrollers often have limited RAM.

---

# Key Takeaways

- `short` stores integer values.
- Typical size is **2 Bytes**.
- `%hd` is used as the format specifier.
- Useful for memory optimization.
- Frequently used in embedded applications.

---

## Next Lesson

➡️ **06_long.c** – Long Integer Data Type
