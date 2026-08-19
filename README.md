# BMI Calculator (C)

A simple command-line program written in C that calculates Body Mass Index (BMI) from user-entered height and weight, and classifies the result into a standard health category.

## Formula

```
BMI = weight (kg) / height (m)²
```

## Categories

| BMI range        | Category     |
|-------------------|--------------|
| Below 18.5         | Underweight  |
| 18.5 – 24.9        | Normal       |
| 25 – 29.9          | Overweight   |
| 30 and above       | Obese        |

## How to run

```bash
gcc bmi_calculator.c -o bmi_calculator -lm
./bmi_calculator
```

> Note: `-lm` links the math library, required for the `pow()` function used in this program.

## Example

```
Enter Your Height(Meter) : 1.75
Enter Your Weight(Kilogram) : 70
Your BMI: 22.86
Normal
```

## What this project covers

- Reading input with `scanf`
- Using the `math.h` library (`pow()`)
- Conditional logic with an if-else-if ladder
- Basic input validation

## Author

Built as a beginner project while learning C fundamentals (conditionals, operators, and basic I/O).
