# Logical Operators in C

## Objective

Learn how to combine and evaluate conditions using logical operators in C.

---

# What are Logical Operators?

Logical operators are used to combine two or more conditions.

The result is always:

- **1** → True
- **0** → False

Logical operators are widely used in:

- if statements
- if-else statements
- loops
- input validation
- embedded system control

---

# Types of Logical Operators

| Operator | Name | Description |
|----------|------|-------------|
| `&&` | Logical AND | True if both conditions are true |
| `||` | Logical OR | True if at least one condition is true |
| `!` | Logical NOT | Reverses the result |

---

# Syntax

```c
condition1 && condition2
condition1 || condition2
!condition
```

---

# Program

See **03_logical_operators.c**

---

# Sample Output

```text
(a > 10 && b < 20) : 1
(a < 10 || b < 20) : 1
!(a > b) : 0
```

---

# Code Explanation

### Logical AND (`&&`)

```c
(a > 10 && b < 20)
```

Both conditions must be true.

Result:

```text
1
```

---

### Logical OR (`||`)

```c
(a < 10 || b < 20)
```

At least one condition must be true.

Result:

```text
1
```

---

### Logical NOT (`!`)

```c
!(a > b)
```

Original:

```text
a > b

TRUE
```

After NOT:

```text
FALSE

Output = 0
```

---

# Truth Tables

## Logical AND (`&&`)

| Condition 1 | Condition 2 | Result |
|-------------|-------------|--------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

---

## Logical OR (`||`)

| Condition 1 | Condition 2 | Result |
|-------------|-------------|--------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

---

## Logical NOT (`!`)

| Input | Output |
|-------|--------|
| 0 | 1 |
| 1 | 0 |

---

# Memory Representation

```
a = 20
b = 10

a > 10      → TRUE
b < 20      → TRUE

TRUE && TRUE

↓

TRUE

↓

Output = 1
```

---

# Real-World Example

```c
int age = 22;
int citizen = 1;

if(age >= 18 && citizen == 1)
{
    printf("Eligible to Vote");
}
```

---

# Embedded Systems Example

```c
int temperature = 45;
int fanStatus = 0;

if(temperature > 40 && fanStatus == 0)
{
    printf("Turn ON Fan");
}
```

Logical operators are used in:

- Sensor monitoring
- Fire alarm systems
- Smart home automation
- Battery management
- Motor protection

---

# Advantages

- Combines multiple conditions.
- Makes decision-making easier.
- Used in almost every real-world program.

---

# Limitations

- Complex conditions can reduce readability if overused.

---

# Interview Questions

### 1. How many logical operators are there in C?

Three.

- `&&`
- `||`
- `!`

---

### 2. What is the output of?

```c
1 && 0
```

Output:

```text
0
```

---

### 3. What is the output of?

```c
1 || 0
```

Output:

```text
1
```

---

### 4. What does `!` do?

It reverses the logical result.

---

# Practice Programs

1. Check voting eligibility.
2. Check whether a number is between 1 and 100.
3. Login validation using username and password.
4. Turn ON a fan if temperature is above a limit.
5. Check if a student has passed all subjects.

---

# Common Mistakes

❌ Wrong

```c
if(a > 10 & b < 20)
```

`&` is a **bitwise operator**, not a logical operator.

✅ Correct

```c
if(a > 10 && b < 20)
```

---

# Did You Know?

 Logical operators use **short-circuit evaluation**.

Example:

```c
if(a != 0 && (10 / a > 1))
```

If `a != 0` is false, the second condition is **not evaluated**, helping avoid errors like division by zero.

---

# Key Takeaways

- `&&` → Both conditions must be true.
- `||` → At least one condition must be true.
- `!` → Reverses the result.
- Logical operators return either 0 or 1.
- Essential for decision-making and Embedded Systems.

---

## Next Lesson

➡️ **04_assignment_operators.c** – Assignment Operators
