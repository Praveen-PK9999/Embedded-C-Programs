# Constants in C

## Objective

Learn how to declare and use constants in C programming.

---

## Theory

A **constant** is a value that cannot be changed during program execution.

There are two common ways to define constants:

1. `#define` (Preprocessor Macro)
2. `const` keyword

---

## Syntax

### Using `#define`

```c
#define PI 3.14159
```

### Using `const`

```c
const int DAYS_IN_WEEK = 7;
```

---

## Program

See **constants.c**

---

## Output

```
Value of PI           : 3.14159
Days in a Week        : 7
```

---

## Explanation

### `#define`

* Processed before compilation.
* Does not occupy memory.
* Commonly used for fixed values like `PI`, buffer sizes, and pin numbers.

### `const`

* Creates a read-only variable.
* Occupies memory.
* Its value cannot be modified after initialization.

---

## Difference between `const` and `#define`

| `const`              | `#define`                 |
| -------------------- | ------------------------- |
| Data type exists     | No data type              |
| Uses memory          | No memory allocation      |
| Checked by compiler  | Processed by preprocessor |
| Better for debugging | Harder to debug           |

---

## Real-world Examples

* Number of days in a week
* Value of PI
* Maximum array size
* GPIO pin numbers in embedded systems

---

## Interview Questions

**Q1. What is a constant?**

A constant is a value that cannot be changed during program execution.

**Q2. Difference between `const` and `#define`?**

`const` is type-safe and checked by the compiler, while `#define` is a preprocessor macro.

**Q3. Which is preferred in Embedded C?**

Both are used:

* `const` for typed read-only values.
* `#define` for hardware-related constants and macros.

---

## Practice Questions

1. Create a constant for the speed of light.
2. Create a constant for the maximum number of students.
3. Print both values.
