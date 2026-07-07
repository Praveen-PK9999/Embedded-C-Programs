# Increment & Decrement Operators in C

## Objective

Learn how **increment (`++`)** and **decrement (`--`)** operators work in C, including the difference between **prefix** and **postfix** forms.

---

# What are Increment & Decrement Operators?

These operators increase or decrease a variable's value by **1**.

| Operator | Meaning |
|----------|---------|
| `++` | Increment by 1 |
| `--` | Decrement by 1 |

---

# Types

## 1. Prefix Increment

```c
++a;
```

Increment first, then use the value.

---

## 2. Postfix Increment

```c
a++;
```

Use the value first, then increment.

---

## 3. Prefix Decrement

```c
--a;
```

Decrease first, then use the value.

---

## 4. Postfix Decrement

```c
a--;
```

Use the value first, then decrease.

---

# Program

See **05_increment_decrement.c**

---

# Sample Output

```text
Initial Value : 10

a++ : 10
Value after a++ : 11

++a : 12
Value after ++a : 12

a-- : 12
Value after a-- : 11

--a : 10
Value after --a : 10
```

---

# Prefix vs Postfix

## Post Increment

```c
int a = 10;

printf("%d", a++);
```

Execution

```
Print 10

↓

Increase

↓

11
```

Output

```
10
```

---

## Pre Increment

```c
int a = 10;

printf("%d", ++a);
```

Execution

```
Increase

↓

11

↓

Print
```

Output

```
11
```

---

# Flow Diagram

### Post Increment

```
a = 10

↓

Print

↓

10

↓

Increment

↓

11
```

---

### Pre Increment

```
a = 10

↓

Increment

↓

11

↓

Print

↓

11
```

---

# Real-World Example

```c
int pageNumber = 1;

pageNumber++;
```

Moves to the next page.

---

# Embedded Systems Example

```c
int counter = 0;

counter++;
```

Used in:

- Timer interrupts
- Pulse counting
- Encoder position
- Sensor sampling
- Event counters

---

# Advantages

- Short and readable code.
- Commonly used in loops.
- Useful for counters and indexing.

---

# Limitations

- Using multiple increments in one expression can make code hard to read.
- Avoid expressions like:

```c
i = i++ + ++i;
```

Their behavior can be confusing and should be avoided.

---

# Comparison

| Operator | Operation First | Value Used |
|----------|-----------------|------------|
| `++a` | Increment | New Value |
| `a++` | Use Value | Then Increment |
| `--a` | Decrement | New Value |
| `a--` | Use Value | Then Decrement |

---

# Interview Questions

### 1. Difference between `++a` and `a++`?

`++a` increments first.

`a++` increments after using the current value.

---

### 2. Output?

```c
int a = 5;

printf("%d", a++);
```

Output

```
5
```

---

### 3. Output?

```c
int a = 5;

printf("%d", ++a);
```

Output

```
6
```

---

### 4. Where are increment operators commonly used?

- Loops
- Arrays
- Counters
- Embedded firmware

---

# Practice Programs

1. Demonstrate all four operators.
2. Count from 1 to 10 using `++`.
3. Countdown from 10 to 1 using `--`.
4. Compare prefix and postfix outputs.

---

# Common Mistakes

❌ Wrong

```c
int x = i++ + ++i;
```

Avoid modifying the same variable multiple times in one expression.

---

# Did You Know?

 The increment operator is used extensively in **for loops**, making it one of the most frequently used operators in C.

---

# Key Takeaways

- `++` increases by 1.
- `--` decreases by 1.
- Prefix changes the value before using it.
- Postfix uses the current value before changing it.
- Essential for loops, arrays, and embedded programming.

---

## Next Lesson

➡️ **06_bitwise_operators.c** – Bitwise Operators
