# Operator Precedence in C

## Objective

Learn how C decides which operator is evaluated first when an expression contains multiple operators.

---

# What is Operator Precedence?

Operator precedence determines the **order in which operators are evaluated** in an expression.

Example:

```c
10 + 5 * 2
```

The multiplication is performed before addition.

Result:

```
20
```

---

# Why is it Important?

Without understanding precedence, you may get unexpected results.

Example:

```c
10 + 5 * 2
```

Many beginners think:

```
(10 + 5) * 2 = 30
```

But the compiler evaluates:

```
10 + (5 * 2)

↓

10 + 10

↓

20
```

---

# Program

See **08_operator_precedence.c**

---

# Sample Output

```text
a + b * c = 20
(a + b) * c = 30
a + b / c = 12
a - b + c = 7
```

---

# Order of Evaluation

Expression:

```c
10 + 5 * 2
```

Execution:

```
5 × 2

↓

10

↓

10 + 10

↓

20
```

---

Expression:

```c
(10 + 5) * 2
```

Execution:

```
10 + 5

↓

15

↓

15 × 2

↓

30
```

---

# Operator Precedence Table

| Priority | Operators |
|----------|-----------|
| Highest | `()` |
| | `++` `--` |
| | `*` `/` `%` |
| | `+` `-` |
| | `<` `<=` `>` `>=` |
| | `==` `!=` |
| | `&&` |
| | `||` |
| Lowest | `=` |

---

# Associativity

When two operators have the same precedence, **associativity** determines the evaluation order.

Example:

```c
10 - 5 + 2
```

Both `-` and `+` have the same precedence.

Evaluation is **left to right**.

```
10 - 5

↓

5 + 2

↓

7
```

---

# Real-World Example

```c
int total = price * quantity + tax;
```

The multiplication is performed before addition.

---

# Embedded Systems Example

```c
float voltage = (adcValue * 5.0) / 1023;
```

Parentheses improve readability and make the intended order clear.

---

# Advantages

- Produces predictable results.
- Reduces programming errors.
- Makes expressions easier to understand.

---

# Interview Questions

### 1. What is operator precedence?

The order in which operators are evaluated.

---

### 2. Which has higher precedence?

```text
*
```

or

```text
+
```

Answer:

```
*
```

---

### 3. What is the output?

```c
10 + 5 * 2
```

Output

```
20
```

---

### 4. How can you change the order of evaluation?

Using **parentheses `()`**.

---

# Practice Programs

1. Evaluate different expressions.
2. Use parentheses to change results.
3. Compare multiplication and division precedence.
4. Create your own precedence examples.

---

# Common Mistakes

❌ Wrong assumption

```c
10 + 5 * 2 = 30
```

✅ Correct

```
20
```

---

# Did You Know?

 Professional developers often use parentheses even when they are not required. This makes the code easier to read and reduces the chance of mistakes.

---

# Key Takeaways

- Operator precedence determines evaluation order.
- Parentheses have the highest precedence.
- `*`, `/`, `%` are evaluated before `+` and `-`.
- Operators with the same precedence follow associativity rules.
- Use parentheses to improve readability.

---

## Next Lesson

➡️ **09_comma_operator.c** – Comma Operator
