# Assignment Operators in C

## Objective

Learn how to assign and update values using assignment operators in C.

---

# What are Assignment Operators?

Assignment operators are used to assign values to variables.

They can also perform an operation and assign the result in a single statement.

---

# Types of Assignment Operators

| Operator | Meaning | Equivalent To |
|----------|---------|---------------|
| `=` | Assignment | `a = b` |
| `+=` | Add and Assign | `a = a + b` |
| `-=` | Subtract and Assign | `a = a - b` |
| `*=` | Multiply and Assign | `a = a * b` |
| `/=` | Divide and Assign | `a = a / b` |
| `%=` | Modulus and Assign | `a = a % b` |

---

# Syntax

```c
variable operator= value;
```

Example

```c
a += 5;
```

Equivalent to

```c
a = a + 5;
```

---

# Program

See **04_assignment_operators.c**

---

# Sample Output

```text
Initial Value : 20

After a += 5  : 25
After a -= 3  : 22
After a *= 2  : 44
After a /= 4  : 11
After a %= 3  : 2
```

---

# Code Explanation

### Assignment

```c
a = 20;
```

Assigns the value 20 to `a`.

---

### Add and Assign

```c
a += 5;
```

Equivalent to

```c
a = a + 5;
```

---

### Subtract and Assign

```c
a -= 3;
```

Equivalent to

```c
a = a - 3;
```

---

### Multiply and Assign

```c
a *= 2;
```

Equivalent to

```c
a = a * 2;
```

---

### Divide and Assign

```c
a /= 4;
```

Equivalent to

```c
a = a / 4;
```

---

### Modulus and Assign

```c
a %= 3;
```

Equivalent to

```c
a = a % 3;
```

---

# Flow of Execution

```
a = 20

↓

a += 5

↓

25

↓

a -= 3

↓

22

↓

a *= 2

↓

44

↓

a /= 4

↓

11

↓

a %= 3

↓

2
```

---

# Real-World Example

```c
int salary = 25000;

salary += 5000;   // Bonus Added
```

---

# Embedded Systems Example

```c
int pwmDuty = 40;

pwmDuty += 10;
```

Used in:

- PWM Duty Cycle
- Brightness Control
- Motor Speed
- Timer Values
- Sensor Calibration

---

# Advantages

- Reduces code length.
- Easier to read.
- Improves maintainability.

---

# Limitations

- Beginners may confuse `=` with `==`.
- Incorrect use may change values unexpectedly.

---

# Interview Questions

### 1. What is the difference between `=` and `+=`?

`=` assigns a value.

`+=` adds a value and stores the result.

---

### 2. What is the output?

```c
int a = 10;

a += 5;
```

Output

```text
15
```

---

### 3. Which operator multiplies and assigns?

```text
*=
```

---

### 4. Which operator divides and assigns?

```text
/=
```

---

# Practice Programs

1. Demonstrate all assignment operators.
2. Increase salary using `+=`.
3. Reduce stock using `-=`.
4. Calculate discount using `/=`.

---

# Common Mistakes

❌ Wrong

```c
if(a = 10)
```

This assigns 10 to `a`.

✅ Correct

```c
if(a == 10)
```

---

# Did You Know?

 Assignment operators generate cleaner code and are commonly used in loops, counters, timers, and embedded firmware.

---

# Key Takeaways

- `=` assigns values.
- `+=`, `-=`, `*=`, `/=`, and `%=` combine an operation with assignment.
- They make code shorter and easier to read.
- Frequently used in embedded applications.

---

## Next Lesson

➡️ **05_increment_decrement.c** – Increment & Decrement Operators
