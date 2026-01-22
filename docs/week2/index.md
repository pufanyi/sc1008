# Week 2

<iframe src="slides.html" width="100%" height="500px" frameborder="0"></iframe>

## Question 1: Linear System

Write a C program that computes the solutions for $x$ and $y$ in the linear system of equations:

$$
\begin{cases}
a_1 x + b_1 y = c_1 \\
a_2 x + b_2 y = c_2
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

## Question 2: Count Characters

Write a C program that reads in character by character from an input source, until `#` is entered. The output of the program is the number of English letters and the number of digits that appear in the input.

### The Code

Here is the complete source code:

```c
--8<-- "src/week2/t2/solution.c"
```

### Code Explanation

#### 1. Reading Input

```c
  while (true) {
    char c = getchar();
    if (c == '#') {
      break;
    }
    // ...
  }
```

- We use an infinite `while (true)` loop to continuously read characters.
- `getchar()` reads one character from standard input.
- If the character is `#`, we `break` out of the loop.

#### 2. Counting Logic

```c
    else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
      num_letters++;
    } else if (c >= '0' && c <= '9') {
      num_digits++;
    }
```

- We check if the character is a letter (lowercase or uppercase) or a digit.
- Note that we compare the character codes directly (e.g., `c >= 'a'`).
- We increment the respective counters.

## Question 3: Print Pattern

Write a C program that reads a positive number `height` between 1 and 9 as its input value, and prints a triangular pattern according to height. Note that only 1, 2 and 3 are used to generate the patterns.

### The Code

Here is the complete source code:

```c
--8<-- "src/week2/t3/solution.c"
```

### Code Explanation

#### 1. Pattern Logic

```c
  for (int i = 0; i < height; ++i) {
    int what_to_print = i % 3 + 1;
    for (int j = 0; j <= i; ++j) {
      printf("%d", what_to_print);
    }
    printf("\n");
  }
```

- The outer loop controls the rows (from 0 to `height - 1`).
- The number to print is determined by `i % 3 + 1`. This generates the sequence 1, 2, 3, 1, 2, 3... for each row.
- The inner loop prints the number `i + 1` times (since `j` goes from 0 to `i`).

## Question 4: Compute Series

Write a C program that computes the value of $e^x$ according to the following formula:

$$
e^x = 1 + \frac{x}{1!} + \frac{x^2}{2!} + \frac{x^3}{3!} + \dots + \frac{x^{10}}{10!}
$$

### The Code

Here is the complete source code:

```c
--8<-- "src/week2/t4/solution.c"
```

### Code Explanation

#### 1. Series Calculation

```c
  double sum = 0;
  double denominator = 1;
  double numerator = 1;
  for (int i = 0; i < N; ++i) {
    sum += numerator / denominator;
    denominator *= i + 1;
    numerator *= x;
  }
```

- We initialize `sum` to 0, `numerator` to 1, and `denominator` to 1.
- The loop runs `N` times (defined as 10).
- In each iteration:
    - We add the current term `numerator / denominator` to `sum`.
    - We update `denominator` by multiplying by `i + 1`.
    - We update `numerator` by multiplying by `x`.
- This computes the first `N` terms of the Taylor series expansion for $e^x$.
