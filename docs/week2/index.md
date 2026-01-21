# Week 2

<iframe src="slides.html" width="100%" height="500px" frameborder="0"></iframe>

## Question 1: Linear System

Write a C program that computes the solutions for $x$ and $y$ in the linear system of equations:

$$
\begin{cases}
a_1x + b_1y = c_1 \\
a_2x + b_2y = c_2
\end{cases}
$$

The solutions for $x$ and $y$ are given by:

$$
x = \frac{b_2c_1 - b_1c_2}{a_1b_2 - a_2b_1} \quad \text{and} \quad y = \frac{a_1c_2 - a_2c_1}{a_1b_2 - a_2b_1}
$$

The program reads in $a_1, b_1, c_1, a_2, b_2$ and $c_2$, and then computes and prints the solutions.
In your program, if the denominator $(a_1b_2 - a_2b_1)$ of the above equations is zero, then it prints an error message "`Unable to compute because the denominator is zero!`".

### The Code

Here is the complete source code for the solver:

```c
--8<-- "src/week2/t1/solution.c"
```

### Code Explanation

#### 1. Headers and Macros

```c
#include <math.h>
#include <stdio.h>

#define EPS 1e-6
```

- `stdio.h`: Standard Input/Output library for `printf` and `scanf`.
- `math.h`: Math library, used here for the `fabs()` function (absolute value of a float).
- `#define EPS 1e-6`: Defines a small epsilon value. Since floating-point arithmetic is not perfectly precise, we use a small threshold to check if a number is "close enough" to zero.

#### 2. Input

```c
  double a1, b1, c1, a2, b2, c2;
  printf("Enter the values for a1, b1, c1, a2, b2, c2:\n");
  scanf("%lf%lf%lf%lf%lf%lf", &a1, &b1, &c1, &a2, &b2, &c2);
```

We declare variables for the coefficients and read them from the user. Note the usage of `%lf` for reading `double` values with `scanf`.

#### 3. Checking the Denominator

```c
  if (fabs(a1 * b2 - a2 * b1) < EPS) {
    printf("Unable to compute because the denominator is zero!\n");
    return 0;
  }
```

Before dividing, we must check if the denominator is zero.

- `a1 * b2 - a2 * b1` is the determinant of the coefficient matrix.
- `fabs(...) < EPS` checks if the absolute value of the determinant is smaller than our epsilon, effectively treating it as zero.
- If it is zero, the system has either no solution or infinite solutions, and we cannot proceed with the formula.

#### 4. Calculating and Printing Results

```c
  double x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
  double y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
  printf("x = %.2f and y = %.2f\n", x, y);
```

If the denominator is valid, we compute `x` and `y` using the formulas and print the result formatted to 2 decimal places (`%.2f`).
