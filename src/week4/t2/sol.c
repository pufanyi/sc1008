#include <stdio.h>

#define SIZE 10

void transpose2D(int ar[][SIZE], int rowSize, int colSize);

int main() {
  int rowSize, colSize;
  int ar[SIZE][SIZE];
  scanf("%d %d", &rowSize, &colSize);
  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < colSize; j++) {
      scanf("%d", &ar[i][j]);
    }
  }
  transpose2D(ar, rowSize, colSize);
  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < colSize; j++) {
      printf("%2d", ar[i][j]);
    }
    putchar('\n');
  }
  return 0;
}

void transpose2D(int ar[][SIZE], int rowSize, int colSize) {
  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < i && j < colSize; j++) {
      int temp = ar[i][j];
      ar[i][j] = ar[j][i];
      ar[j][i] = temp;
    }
  }
}

/*
4 4
1 2 3 4
5 1 2 2
6 3 4 4
7 5 6 7
*/
