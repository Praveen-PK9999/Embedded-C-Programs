# Comma Operator in C

## Objective

Learn how the **comma operator (` , `)** works in C and understand where it is commonly used.

---

# What is the Comma Operator?

The comma operator allows multiple expressions to be evaluated from **left to right**.

The value of the **last expression** becomes the result.

---

# Syntax

```c
expression1, expression2, expression3;
```

Expressions are evaluated one after another.

---

# Program

See **09_comma_operator.c**

---

# Sample Output

```text
a = 10
b = 20
c = 30

After Modification:
a = 15
b = 25
Result = 40
```

---

# Code Explanation

### Multiple Assignments

```c
a = 10, b = 20, c = 30;
```

Each assignment is evaluated from left to right.

---

### Comma Operator in Expression

```c
result = (a += 5, b += 5, a + b);
```

Execution:

```
a += 5

↓

a = 15

↓

b += 5

↓

b = 25

↓

a + b

↓

40
```

The final expression (`a + b`) becomes the value assigned to `result`.

---

# Memory Representation

```
Initial

a = 10
b = 20

↓

a += 5

↓

15

↓

b += 5

↓

25

↓

a + b

↓

40
```

---

# Real-World Example

```c
int x, y;

x = 10, y = 20;
```

---

# Embedded Systems Example

The comma operator is occasionally seen in `for` loops.

```c
for(i = 0, j = 10; i < j; i++, j--)
{
    printf("%d %d\n", i, j);
}
```

It allows multiple variables to be initialized and updated together.

---

# Advantages

- Evaluates multiple expressions in one statement.
- Useful in `for` loops.
- Keeps related operations together.

---

# Limitations

- Can reduce readability if overused.
- Rarely needed in everyday programming outside specific cases.

---

# Interview Questions

### 1. What is the comma operator?

It evaluates multiple expressions from left to right and returns the value of the last expression.

---

### 2. Where is the comma operator commonly used?

In `for` loops.

---

### 3. What is the output?

```c
int x;

x = (2, 4, 6);

printf("%d", x);
```

Output

```
6
```

---

### 4. Does the comma operator execute all expressions?

Yes.

---

# Practice Programs

1. Use the comma operator for multiple assignments.
2. Use the comma operator in a `for` loop.
3. Evaluate different comma expressions.
4. Print the final result of comma expressions.

---

# Common Mistakes

❌ Confusing the comma operator with commas used to separate function arguments.

Example:

```c
printf("%d %d", a, b);
```

Here, the commas separate function arguments—they are **not** the comma operator.

---

# Did You Know?

The comma operator has the **lowest precedence** among C operators, so parentheses are often used to make expressions clear.

---

# Key Takeaways

- Evaluates expressions from left to right.
- Returns the value of the last expression.
- Commonly used in `for` loops.
- Different from commas used to separate function arguments.

---

## Next Lesson

➡️ **10_sizeof_operator.c** – Sizeof Operator
