# Bitwise Operators in C

## Objective

Learn how bitwise operators manipulate individual bits of integer values. These operators are widely used in Embedded Systems for register configuration, GPIO control, communication protocols, and performance optimization.

---

# What are Bitwise Operators?

Bitwise operators perform operations on the **binary representation** of integers.

Example:

```
10 → 1010
 6 → 0110
```

---

# Types of Bitwise Operators

| Operator | Name | Description |
|----------|------|-------------|
| `&` | Bitwise AND | Sets bit if both bits are 1 |
| `|` | Bitwise OR | Sets bit if either bit is 1 |
| `^` | Bitwise XOR | Sets bit if bits are different |
| `~` | Bitwise NOT | Inverts all bits |
| `<<` | Left Shift | Shifts bits to the left |
| `>>` | Right Shift | Shifts bits to the right |

---

# Program

See **06_bitwise_operators.c**

---

# Binary Representation

```
a = 10 = 1010
b =  6 = 0110
```

---

# Bitwise AND (&)

```
 1010
&0110
------
 0010

Decimal = 2
```

---

# Bitwise OR (|)

```
 1010
|0110
------
 1110

Decimal = 14
```

---

# Bitwise XOR (^)

```
 1010
^0110
------
 1100

Decimal = 12
```

---

# Bitwise NOT (~)

```
a = 10

1010

↓

Invert

0101

```

In actual computers, integers use **two's complement**, so:

```
~10 = -11
```

---

# Left Shift (<<)

```
10 = 1010

1010 << 1

↓

10100

Decimal = 20
```

Each left shift by one position roughly multiplies the value by 2 (when no overflow occurs).

---

# Right Shift (>>)

```
10 = 1010

1010 >> 1

↓

0101

Decimal = 5
```

Each right shift by one position roughly divides the value by 2 for positive integers.

---

# Truth Tables

## AND

| A | B | A & B |
|---|---|-------|
|0|0|0|
|0|1|0|
|1|0|0|
|1|1|1|

---

## OR

| A | B | A \| B |
|---|---|--------|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|1|

---

## XOR

| A | B | A ^ B |
|---|---|-------|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

---

# Embedded Systems Example

Setting a bit:

```c
PORTA |= (1 << 3);
```

Clearing a bit:

```c
PORTA &= ~(1 << 3);
```

Toggling a bit:

```c
PORTA ^= (1 << 3);
```

Checking a bit:

```c
if(PORTA & (1 << 3))
{
    printf("Bit is Set");
}
```

These operations are used in:

- GPIO Control
- LED Control
- UART Registers
- SPI Registers
- I2C Registers
- Timer Configuration
- Interrupt Configuration
- ADC Configuration

---

# Advantages

- Very fast operations.
- Memory efficient.
- Essential for hardware programming.

---

# Interview Questions

### 1. How many bitwise operators are there?

Six.

---

### 2. Difference between `&&` and `&`?

`&&` → Logical AND

`&` → Bitwise AND

---

### 3. What does `1 << 3` mean?

Shift the binary value `1` three positions to the left.

Result:

```
0001

↓

1000

Decimal = 8
```

---

### 4. Why are bitwise operators important in Embedded Systems?

They allow direct manipulation of hardware registers and individual bits.

---

# Practice Programs

1. Find AND of two numbers.
2. Find OR of two numbers.
3. Find XOR of two numbers.
4. Swap two numbers using XOR.
5. Set, clear, toggle, and check a bit.

---

# Common Mistakes

❌ Using `&&` instead of `&`.

❌ Using `||` instead of `|`.

---

# Did You Know?

 Nearly every STM32 and ESP32 firmware project uses bitwise operators to configure peripheral registers.

---

# Key Takeaways

- Bitwise operators work on binary values.
- Used extensively in Embedded Systems.
- Essential for register manipulation.
- Frequently asked in technical interviews.

---

## Next Lesson

➡️ **07_ternary_operator.c** – Ternary Operator
