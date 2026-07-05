# Double Data Type (`double`)

## Objective

Learn about the `double` data type, its precision, memory size, syntax, and applications in C programming and Embedded Systems.

---

# What is `double`?

The `double` data type is used to store **high-precision decimal numbers**.

It provides **more precision** than the `float` data type.

Example values:

```c
3.141592653589793
12345.678901234
```

---

# Syntax

### Declaration

```c
double pi;
```

### Initialization

```c
double pi = 3.141592653589793;
```

---

# Program

See **04_double.c**

---

# Sample Output

```text
Value of PI : 3.141592653589793
Distance    : 123456.789123
Salary      : 45678.987654
```

---

# Memory Size

| Property | Value |
|----------|-------|
| Data Type | double |
| Typical Size | 8 Bytes |
| Format Specifier | `%lf` |

---

# Precision

A `double` typically provides **15–16 decimal digits** of precision.

Example:

```c
double pi = 3.141592653589793;
```

---

# Code Explanation

```c
double pi = 3.141592653589793;
```

Stores a high-precision decimal value.

```c
printf("%.15lf", pi);
```

Prints the value with 15 digits after the decimal point.

---

# Memory Representation

```
Memory

+-------------------------+
| 3.141592653589793       |
+-------------------------+

Size = 8 Bytes
```

---

# Real-World Example

```c
double bankBalance = 1500000.987654;
double latitude = 13.082680;
double longitude = 80.270718;
```

---

# Embedded Systems Example

`double` is used in applications that require high precision, such as:

- GPS coordinates
- Scientific calculations
- Robotics
- Navigation systems
- Aerospace applications

> Note: On many small microcontrollers (such as AVR), `double` has the same size and precision as `float`. On desktop systems and many 32-bit/64-bit platforms, `double` typically provides higher precision.

---

# Advantages

- Higher precision than `float`.
- Suitable for scientific calculations.
- Better for applications requiring accurate decimal values.

---

# Limitations

- Uses more memory than `float`.
- Floating-point operations may be slower on systems without hardware support.

---

# Float vs Double

| Feature | float | double |
|---------|-------|--------|
| Memory | 4 Bytes | 8 Bytes |
| Precision | ~6–7 digits | ~15–16 digits |
| Format Specifier | `%f` | `%lf` |
| Speed | Usually faster | May be slower |

---

# Interview Questions

### 1. What is the difference between float and double?

`double` provides more precision and typically uses more memory than `float`.

---

### 2. What is the format specifier for double?

`%lf`

---

### 3. What is the typical size of double?

Typically **8 Bytes**, depending on the compiler and platform.

---

### 4. When should you use double?

When higher precision is required.

---

# Practice Programs

1. Store the value of π using `double`.
2. Calculate the area of a circle using `double`.
3. Store GPS latitude and longitude.
4. Compare the output of `float` and `double`.

---

# Common Mistakes

❌ Wrong

```c
float pi = 3.141592653589793;
```

This loses precision.

✅ Better

```c
double pi = 3.141592653589793;
```

---

# Did You Know?

On many embedded microcontrollers, using `double` instead of `float` may not provide additional precision because both can be implemented the same way. Always check your compiler and target hardware documentation.

---

# Key Takeaways

- `double` stores high-precision decimal numbers.
- Typical size is **8 Bytes**.
- `%lf` is used with `printf` and `scanf`.
- `double` offers higher precision than `float`.
- Choose `double` only when your application needs the extra precision.

---

## Next Lesson

➡️ **05_short.c** – Short Integer Data Type
