# Relational Operators in C

## Objective

Learn how to compare two values using relational operators in C.

---

# What are Relational Operators?

Relational operators compare two values or expressions.

The result is always:

- **1** → True
- **0** → False

These operators are mainly used in:

- if statements
- if-else statements
- loops
- conditional expressions

---

# Types of Relational Operators

| Operator | Meaning | Example |
|----------|---------|---------|
| `==` | Equal to | `a == b` |
| `!=` | Not Equal to | `a != b` |
| `>` | Greater Than | `a > b` |
| `<` | Less Than | `a < b` |
| `>=` | Greater Than or Equal | `a >= b` |
| `<=` | Less Than or Equal | `a <= b` |

---

# Syntax

```c
expression1 operator expression2
```

Example

```c
if(a > b)
```

---

# Program

See **02_relational_operators.c**

---

# Sample Output

```text
a == b : 0
a != b : 1
a > b  : 1
a < b  : 0
a >= b : 1
a <= b : 0
```

---

# Code Explanation

### Equal To

```c
a == b
```

Checks whether both values are equal.

---

### Not Equal To

```c
a != b
```

Checks whether values are different.

---

### Greater Than

```c
a > b
```

Checks whether the left value is greater.

---

### Less Than

```c
a < b
```

Checks whether the left value is smaller.

---

### Greater Than or Equal

```c
a >= b
```

Checks whether the left value is greater than or equal.

---

### Less Than or Equal

```c
a <= b
```

Checks whether the left value is less than or equal.

---

# Truth Table

| Expression | Result |
|------------|--------|
| 20 == 20 | 1 |
| 20 == 10 | 0 |
| 20 > 10 | 1 |
| 20 < 10 | 0 |
| 20 != 10 | 1 |
| 20 <= 20 | 1 |

---

# Memory Representation

```
a = 20
b = 10

20 > 10

↓

TRUE

↓

Output = 1
```

---

# Real-World Example

```c
int age = 20;

if(age >= 18)
{
    printf("Eligible to Vote");
}
```

---

# Embedded Systems Example

```c
int temperature = 45;

if(temperature > 40)
{
    printf("Cooling Fan ON");
}
```

Relational operators are used for:

- Temperature monitoring
- Battery protection
- Motor control
- Sensor threshold detection

---

# Advantages

- Makes decision making possible.
- Essential for conditions.
- Used in loops and comparisons.

---

# Limitations

- Returns only 0 or 1.
- Does not modify variable values.

---

# Interview Questions

### 1. What do relational operators return?

**0 (False)** or **1 (True)**

---

### 2. How many relational operators are there?

Six.

---

### 3. Difference between `=` and `==`?

`=` → Assignment

`==` → Comparison

---

### 4. Which operator checks "Not Equal"?

```c
!=
```

---

# Practice Programs

1. Compare two numbers.
2. Find the largest number.
3. Check voting eligibility.
4. Check pass or fail.
5. Compare temperatures.

---

# Common Mistakes

❌ Wrong

```c
if(a = b)
```

This assigns `b` to `a`.

✅ Correct

```c
if(a == b)
```

---

# Did You Know?

 Every `if`, `while`, and `for` condition in C ultimately evaluates to either **0 (False)** or **1 (True)**.

---

# Key Takeaways

- Relational operators compare values.
- Output is always 0 or 1.
- Used in decision making.
- Frequently used in Embedded Systems.
- Don't confuse `=` with `==`.

---

## Next Lesson

➡️ **03_logical_operators.c** – Logical Operators
