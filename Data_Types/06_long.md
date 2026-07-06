# Long Integer Data Type (`long`)

## Objective

Learn about the `long` data type, its memory size, range, syntax, and applications in C programming and Embedded Systems.

---

# What is `long`?

The `long` (or `long int`) data type is used to store **larger integer values** than a `short`, and on many systems it can store larger values than a regular `int`.

Example:

```c
long int population = 1400000000;
```

---

# Syntax

### Declaration

```c
long int number;
```

or

```c
long number;
```

### Initialization

```c
long int population = 1400000000;
```

---

# Program

See **06_long.c**

---

# Sample Output

```text
Population     : 1400000000
Distance       : 384400 km
Account Number : 1234567890

Size of long int : 8 Bytes
```

---

# Memory Size

| Property | Value |
|----------|-------|
| Data Type | long int |
| Typical Size | 4 or 8 Bytes |
| Format Specifier | `%ld` |

> The size of `long` depends on the compiler and operating system.

---

# Typical Range

| Type | Typical Range |
|------|---------------|
| signed long | Depends on implementation |
| unsigned long | Depends on implementation |

---

# Code Explanation

```c
long int population = 1400000000;
```

Stores a large integer value.

```c
printf("%ld", population);
```

Prints a `long int`.

```c
sizeof(long int)
```

Returns the size of `long int`.

---

# Memory Representation

```
Memory

+----------------------+
|   1400000000         |
+----------------------+

Size = Depends on Platform
```

---

# Real-World Example

```c
long population = 1400000000;
long distanceToMoon = 384400;
long transactionId = 987654321;
```

---

# Embedded Systems Example

```c
long pulseCount = 500000;
long timestamp = 123456789;
```

Used for:

- Timer counts
- Pulse counters
- Large measurements
- Time values

---

# Advantages

- Stores larger integer values.
- Useful for counters and timestamps.
- Suitable when `int` may not be large enough.

---

# Limitations

- Uses more memory than `short`.
- Size varies between platforms.

---

# Comparison

| Feature | short | int | long |
|---------|------:|----:|-----:|
| Typical Size | 2 Bytes | 4 Bytes | 4 or 8 Bytes |
| Range | Small | Medium | Larger |

---

# Interview Questions

### 1. What is the format specifier for `long`?

`%ld`

---

### 2. Is `long` always 8 bytes?

No. Its size depends on the compiler and platform.

---

### 3. When should you use `long`?

When integer values may exceed the range of `int`.

---

### 4. What is the difference between `int` and `long`?

`long` is intended to support a larger integer range, though the exact size depends on the implementation.

---

# Practice Programs

1. Store your country's population.
2. Store the Earth-Moon distance.
3. Print the size of `long`.
4. Compare `int` and `long` using `sizeof()`.

---

# Common Mistakes

❌ Wrong

```c
printf("%d", population);
```

✅ Correct

```c
printf("%ld", population);
```

---

# Did You Know?

💡 For fixed-width integer sizes in embedded systems, many developers prefer types like `int32_t` and `uint32_t` from `<stdint.h>` because they have predictable sizes across platforms.

---

# Key Takeaways

- `long` stores large integer values.
- Use `%ld` as the format specifier.
- The size of `long` is implementation-dependent.
- Useful for timestamps, counters, and large numerical values.

---

## Next Lesson

➡️ **07_signed.c** – Signed Data Type
