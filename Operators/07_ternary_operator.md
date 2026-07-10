# Ternary Operator in C

## Objective

Learn how to use the **Ternary Operator (`?:`)** to make simple decisions in C programs.

---

# What is the Ternary Operator?

The **Ternary Operator** is a shorthand form of the `if...else` statement.

It evaluates a condition and returns one of two values.

---

# Syntax

```c
(condition) ? expression1 : expression2;
```

If the condition is **true**, `expression1` is executed.

If the condition is **false**, `expression2` is executed.

---

# Program

See **07_ternary_operator.c**

---

# Sample Output

```text
First Number  : 20
Second Number : 10
Largest Number: 20
```

---

# Code Explanation

```c
largest = (a > b) ? a : b;
```

Step 1

```
a > b

20 > 10

TRUE
```

Step 2

Since the condition is **true**, the value of `a` is assigned to `largest`.

```
largest = 20
```

---

# Equivalent if...else Statement

```c
if(a > b)
{
    largest = a;
}
else
{
    largest = b;
}
```

The ternary operator performs the same task in a single line.

---

# Flow Diagram

```
        a > b ?

       /      \

    TRUE      FALSE

     |           |

largest=a   largest=b
```

---

# Real-World Example

```c
int age = 20;

char *status = (age >= 18) ? "Adult" : "Minor";
```

---

# Embedded Systems Example

```c
int temperature = 45;

char *fan = (temperature > 40) ? "ON" : "OFF";
```

Applications include:

- Fan Control
- Battery Monitoring
- Sensor Threshold Detection
- Alarm Systems
- Smart Home Automation

---

# Advantages

- Shorter than `if...else`.
- Easy to read for simple conditions.
- Reduces code length.

---

# Limitations

- Not suitable for complex decision-making.
- Deeply nested ternary operators reduce readability.

---

# Comparison

| if...else | Ternary |
|-----------|----------|
| Multiple lines | Single line |
| Better for complex logic | Better for simple logic |

---

# Interview Questions

### 1. What is the syntax of the ternary operator?

```c
(condition) ? expression1 : expression2;
```

---

### 2. How many operands does the ternary operator have?

Three.

---

### 3. Is the ternary operator a replacement for every if...else statement?

No. It is best suited for simple conditions.

---

### 4. Find the output.

```c
int a = 5;

int b = (a > 3) ? 10 : 20;
```

Output

```
10
```

---

# Practice Programs

1. Find the largest of two numbers.
2. Check whether a number is even or odd.
3. Find the minimum of two numbers.
4. Check voting eligibility.
5. Find the maximum of three numbers using nested ternary operators.

---

# Common Mistakes

❌ Wrong

```c
(a > b) ? printf("A");
```

Missing the **false expression**.

✅ Correct

```c
(a > b) ? printf("A") : printf("B");
```

---

# Did You Know?

 The ternary operator is the **only operator in C that requires three operands**.

---

# Key Takeaways

- The ternary operator is written as `?:`.
- It is a shorthand for `if...else`.
- Best used for simple conditions.
- Makes code concise and readable.

---

## Next Lesson

➡️ **08_operator_precedence.c** – Operator Precedence
