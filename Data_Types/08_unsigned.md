# Unsigned Data Type (`unsigned`)

## Objective

Learn about the `unsigned` data type, its memory size, range, syntax, and applications in C programming and Embedded Systems.

---

# What is `unsigned`?

The `unsigned` keyword allows a variable to store **only positive values and zero**.

Since it does not store negative values, the entire range is available for positive numbers.

Example:

```c
unsigned int adcValue = 4095;
```

---

# Syntax

### Declaration

```c
unsigned int number;
```

### Initialization

```c
unsigned int counter = 50000;
```

---

# Program

See **08_unsigned.c**

---

# Sample Output

```text
Students : 120
ADC Value: 4095
Counter  : 50000

Size of unsigned int : 4 Bytes
```

---

# Memory Size

| Property | Value |
|----------|-------|
| Data Type | unsigned int |
| Typical Size | 4 Bytes |
| Format Specifier | `%u` |

---

# Typical Range

| Type | Typical Range |
|------|----------------|
| unsigned int | 0 to 4,294,967,295 |

---

# Code Explanation

```c
unsigned int adcValue = 4095;
```

Stores a positive integer.

```c
printf("%u", adcValue);
```

Prints an unsigned integer.

---

# Memory Representation

```
Memory

+----------------+
|      4095      |
+----------------+

Size = 4 Bytes
```

---

# Real-World Example

```c
unsigned int age = 23;
unsigned int totalStudents = 120;
```

---

# Embedded Systems Example

```c
unsigned int adcValue = 1023;
unsigned int timerCount = 5000;
unsigned int pulseCount = 250;
```

Commonly used for:

- ADC readings
- Timer values
- GPIO pin numbers
- Counters
- Sensor readings
- PWM duty cycle

---

# Advantages

- Larger positive range than signed integers.
- Ideal for values that can never be negative.
- Commonly used in embedded programming.

---

# Limitations

- Cannot store negative values.

---

# Comparison

| Feature | signed | unsigned |
|---------|---------|-----------|
| Negative Values | ✅ Yes | ❌ No |
| Positive Range | Smaller | Larger |
| Format Specifier | `%d` | `%u` |

---

# Interview Questions

### 1. What is an unsigned integer?

An unsigned integer stores only positive values and zero.

---

### 2. What is the format specifier for unsigned int?

`%u`

---

### 3. Why does unsigned have a larger positive range?

Because no bits are reserved for representing negative numbers.

---

### 4. When should you use unsigned?

When the value can never be negative.

---

# Practice Programs

1. Store your age using unsigned int.
2. Store an ADC value.
3. Store a timer count.
4. Compare signed and unsigned integers.

---

# Common Mistakes

❌ Wrong

```c
unsigned int value = -10;
```

This produces unexpected behavior because unsigned variables cannot represent negative values.

---

# Did You Know?

💡 Most embedded libraries use fixed-width unsigned types such as:

```c
uint8_t
uint16_t
uint32_t
```

These come from `<stdint.h>` and guarantee the size of the variable across platforms.

---

# Key Takeaways

- `unsigned` stores only positive values.
- `%u` is the format specifier.
- Typical size is 4 Bytes.
- Provides a larger positive range than `signed`.
- Widely used in embedded systems.

---

## Next Lesson

➡️ **09_sizeof_datatypes.c** – Size of Data Types
