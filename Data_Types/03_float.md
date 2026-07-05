# Floating Point Data Type (`float`)

## Objective

Learn about the **`float`** data type, its memory size, precision, syntax, and applications in C programming and Embedded Systems.

---

# What is `float`?

The **`float`** data type is used to store **decimal (fractional) numbers**.

Examples:

```c
3.14
7.60
36.5
0.125
```

Unlike `int`, `float` can store values after the decimal point.

---

# Syntax

### Declaration

```c
float temperature;
```

### Initialization

```c
float temperature = 36.5;
```

---

# Program

See **03_float.c**

---

# Sample Output

```text
Temperature : 36.50 °C
Voltage     : 5.00 V
CGPA        : 7.60
```

---

# Memory Size

| Property | Value |
|----------|-------|
| Data Type | float |
| Typical Size | 4 Bytes |
| Format Specifier | `%f` |

---

# Precision

A `float` typically provides about **6–7 decimal digits** of precision.

Example:

```c
float pi = 3.14159265;
```

Output:

```text
3.141593
```

---

# Code Explanation

```c
float temperature = 36.5;
```

Stores a decimal value.

```c
printf("%.2f", temperature);
```

Prints the value with **2 digits after the decimal point**.

---

# Memory Representation

```
Memory

+--------------+
| 36.50        |
+--------------+

Size = 4 Bytes
```

---

# Real-World Example

```c
float salary = 45250.75;
float percentage = 89.65;
float distance = 125.75;
```

---

# Embedded Systems Example

```c
float temperature = 28.75;
float batteryVoltage = 3.72;
float humidity = 65.40;
```

Used in:

- Temperature Sensors
- Humidity Sensors
- Voltage Measurement
- Current Measurement
- GPS Coordinates

---

# Advantages

- Stores decimal numbers.
- Good precision for most applications.
- Commonly used with sensor data.

---

# Limitations

- Uses more memory than `int`.
- Floating-point calculations are slower than integer calculations on many microcontrollers.

---

# Interview Questions

### 1. What is a float?

A data type used to store decimal numbers.

---

### 2. What is the format specifier for float?

`%f`

---

### 3. What is the typical size of float?

4 Bytes.

---

### 4. Why is float used in Embedded Systems?

To store values such as temperature, voltage, humidity, pressure, and other sensor readings.

---

# Practice Programs

1. Store your height.
2. Store room temperature.
3. Calculate the average of three floating-point numbers.
4. Convert Celsius to Fahrenheit.
5. Calculate the area of a circle using `float`.

---

# Common Mistakes

❌ Wrong

```c
printf("%d", temperature);
```

✅ Correct

```c
printf("%f", temperature);
```

Or for two decimal places:

```c
printf("%.2f", temperature);
```

---

# Did You Know?

💡 Most small microcontrollers (such as AVR-based Arduino boards) do **not** have dedicated floating-point hardware. Floating-point calculations are performed in software, making them slower than integer operations.

For this reason, embedded developers often use integers whenever possible.

---

# Key Takeaways

- `float` stores decimal numbers.
- Typical size is **4 Bytes**.
- `%f` is the format specifier.
- Precision is about **6–7 digits**.
- Widely used for sensor values in Embedded Systems.

---

## Next Lesson

➡️ **04_double.c** – Double Data Type
