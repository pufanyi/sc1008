#include <stdio.h>

#define SIZE 10

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);

int main() {
  int ar[SIZE][SIZE];
  int rowSize, colSize;
  scanf("%d %d", &rowSize, &colSize);
  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < colSize; j++) {
      scanf("%d", &ar[i][j]);
    }
  }
  reduceMatrix2D(ar, rowSize, colSize);
  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < colSize; j++) {
      printf("%3d", ar[i][j]);
    }
    putchar('\n');
  }
  return 0;
}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize) {
  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < i; j++) {
      ar[j][j] += ar[i][j];
      ar[i][j] = 0;
    }
  }
}

/*
4 4
4 3 8 6
9 0 6 5
5 1 2 4
9 8 3 7
*/
