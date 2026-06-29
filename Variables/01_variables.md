# Variables in C

## Objective

Learn how to declare, initialize, and use variables in C programming.

---

# What is a Variable?

A **variable** is a named memory location used to store data. The value stored in a variable can change during program execution.

Example:

```c
int age = 23;
```

Here:

* `int` → Data type
* `age` → Variable name
* `23` → Value stored in the variable

---

# Syntax

```c
data_type variable_name;
```

### Declaration

```c
int age;
```

### Initialization

```c
int age = 23;
```

### Declaration + Initialization

```c
float cgpa = 7.60;
```

---

# Data Types Used

| Data Type | Description          | Example      |
| --------- | -------------------- | ------------ |
| int       | Integer numbers      | 100          |
| float     | Decimal numbers      | 3.14         |
| char      | Single character     | 'A'          |
| double    | Large decimal values | 3.1415926535 |

---

# Program

See **01_variables.c**

---

# Sample Output

```text
Age   : 23
CGPA  : 7.60
Grade : A
```

---

# Code Explanation

```c
int age = 23;
```

Creates an integer variable named `age`.

```c
float cgpa = 7.60;
```

Creates a floating-point variable named `cgpa`.

```c
char grade = 'A';
```

Creates a character variable named `grade`.

```c
printf("%d", age);
```

Displays an integer.

```c
printf("%.2f", cgpa);
```

Displays a floating-point number with two decimal places.

```c
printf("%c", grade);
```

Displays a character.

---

# Memory Representation

| Variable | Data Type | Typical Size |
| -------- | --------- | ------------ |
| age      | int       | 4 Bytes      |
| cgpa     | float     | 4 Bytes      |
| grade    | char      | 1 Byte       |

---

# Real-World Example

In a student management system:

```c
int studentId = 101;
float percentage = 92.5;
char section = 'A';
```

These variables store student information.

---

# Advantages of Variables

* Store data efficiently.
* Values can change during execution.
* Improve code readability.
* Make programs dynamic.

---

# Interview Questions

### 1. What is a variable?

A variable is a named memory location used to store data whose value can change during program execution.

### 2. What is the difference between declaration and initialization?

**Declaration**

```c
int age;
```

**Initialization**

```c
int age = 23;
```

### 3. Why is `char` written inside single quotes?

Because a character constant is represented using single quotes.

Example:

```c
'A'
```

Strings use double quotes:

```c
"Hello"
```

### 4. What is the default value of a local variable?

A local variable has **no default value**. It contains a garbage value unless initialized.

---

# Practice Questions

1. Store your name's first letter.
2. Store your age.
3. Store your CGPA.
4. Store your mobile number using `long long int`.
5. Print all values in a formatted output.

---

# Key Takeaways

* Variables store data.
* Every variable has a data type.
* Variables should have meaningful names.
* Initialize variables before using them.
* Different data types occupy different amounts of memory.

---

## Next Topic

➡️ **02_constants.c**
