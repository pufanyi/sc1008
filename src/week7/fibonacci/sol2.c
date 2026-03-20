#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n, int* memory);

int main() {
  int n;
  scanf("Enter a number n: %d", &n);
  int* memory = (int*)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    memory[i] = -1;
  }
  printf("Fibonacci of %d is %d\n", n, fibonacci(n, memory));
  free(memory);
  return 0;
}

int fibonacci(int n, int* memory) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  if (memory[n] != -1) {
    return memory[n];
  }
  memory[n] = fibonacci(n - 1, memory) + fibonacci(n - 2, memory);
  return memory[n];
}
