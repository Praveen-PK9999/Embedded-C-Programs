# Signed Data Type (`signed`)

## Objective

Learn about the `signed` data type, its memory size, range, syntax, and applications in C programming and Embedded Systems.

---

# What is `signed`?

The `signed` keyword allows a variable to store **both positive and negative** integer values.

By default, an `int` is usually **signed**, so these are equivalent:

```c
int number = -10;
```

```c
signed int number = -10;
```

---

# Syntax

### Declaration

```c
signed int number;
```

### Initialization

```c
signed int temperature = -20;
```

---

# Program

See **07_signed.c**

---

# Sample Output

```text
Temperature : -20 °C
Profit      : 5000
Altitude    : -150 m

Size of signed int : 4 Bytes
```

---

# Memory Size

| Property | Value |
|----------|-------|
| Data Type | signed int |
| Typical Size | 4 Bytes |
| Format Specifier | `%d` |

---

# Typical Range

| Type | Typical Range |
|------|-----------------------------|
| signed int | -2,147,483,648 to 2,147,483,647 |

---

# Code Explanation

```c
signed int temperature = -20;
```

Stores a negative integer.

```c
printf("%d", temperature);
```

Prints the signed integer.

---

# Binary Representation (Two's Complement)

Example:

```text
Decimal : -5

Binary Representation (8-bit):

00000101   (+5)

Invert bits

11111010

Add 1

11111011   (-5)
```

Most modern computers store signed integers using **Two's Complement**.

---

# Memory Representation

```
Memory

+----------------+
|      -20       |
+----------------+

Size = 4 Bytes
```

---

# Real-World Example

```c
signed int bankBalance = -500;
signed int temperature = -10;
```

---

# Embedded Systems Example

```c
signed int temperature = -15;
signed int motorOffset = -25;
```

Commonly used for:

- Temperature sensors
- Error values
- Position offsets
- Calibration values

---

# Advantages

- Supports positive and negative numbers.
- Ideal for calculations involving direction or offsets.

---

# Limitations

- Half of the available values are used for negative numbers.

---

# Comparison

| Feature | signed | unsigned |
|---------|---------|-----------|
| Negative Values | ✅ Yes | ❌ No |
| Positive Values | ✅ Yes | ✅ Yes |
| Default for int | ✅ Yes | ❌ No |

---

# Interview Questions

### 1. What is a signed integer?

A signed integer stores both positive and negative values.

---

### 2. What is the default type of `int`?

Usually, `int` is signed.

---

### 3. Which representation is commonly used for signed integers?

Two's Complement.

---

### 4. When should you use `signed`?

When negative values are possible.

---

# Practice Programs

1. Store a negative temperature.
2. Store a bank balance.
3. Print the size of a signed integer.
4. Compare signed and unsigned integers.

---

# Common Mistakes

❌ Assuming `signed` provides a larger positive range.

It doesn't—it uses part of the range for negative values.

---

# Did You Know?

💡 Embedded developers often use **signed** types for temperature, acceleration, gyroscope readings, and motor direction because these values can be both positive and negative.

---

# Key Takeaways

- `signed` stores positive and negative integers.
- `int` is usually signed by default.
- Uses Two's Complement representation.
- `%d` is the format specifier.
- Widely used in embedded applications involving signed measurements.

---

## Next Lesson

➡️ **08_unsigned.c** – Unsigned Data Type
