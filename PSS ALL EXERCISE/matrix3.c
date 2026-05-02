#include <stdio.h>

int main() {
  int r1, c1, r2, c2, a[100][100], b[100][100], mul[100][100], i, j, k;

  printf("Enter rows and columns for the first matrix: ");
  scanf("%d %d", &r1, &c1);

  printf("Enter rows and columns for the second matrix: ");
  scanf("%d %d", &r2, &c2);
  
  if (c1 != r2) {
    printf("Error! Column of the first matrix must be equal to row of the second.\n");
    return 0;
  }

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c1; ++j) {
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r2; ++i)
    for (j = 0; j < c2; ++j) {
      scanf("%d", &b[i][j]);
    }

  
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j) {
      mul[i][j] = 0;
    }

  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j)
      for (k = 0; k < c1; ++k) {
        mul[i][j] += a[i][k] * b[k][j];
      }

  printf("\nMultiplication of two matrices: \n");
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j) {
      printf("%d   ", mul[i][j]);
      if (j == c2 - 1) {
        printf("\n\n");
      }
    }

  return 0;
}