/**
 * @file ex5.c
 * @author Mateus Braga - mateusbrg
 * @brief Escreva um programa que, dados dois inteiros n e m,
 * onde 1 ≤ n,m ≤ 1000, leia uma matriz A de ordem n×m e calcule a sua transposta.
 */

#include <stdio.h>

#define MAX 1000

void read_matrix(int lines_size, int columns_size, int matrix[MAX][MAX])
{
  for (int i = 0; i < lines_size; i++)
  {
    for (int j = 0; j < columns_size; j++)
    {
      scanf("%d ", &matrix[i][j]);
    }
  }
}

void transpose_matrix(int input_lines_size, int input_columns_size, int input_matrix[MAX][MAX], int output_matrix[MAX][MAX])
{
  for (int i = 0; i < input_lines_size; i++)
  {
    for (int j = 0; j < input_columns_size; j++)
    {
      output_matrix[j][i] = input_matrix[i][j];
    }
  }
}

void print_matrix(int lines_size, int columns_size, int matrix[MAX][MAX])
{
  for (int i = 0; i < lines_size; i++)
  {
    for (int j = 0; j < columns_size; j++)
    {
      printf("%d ", matrix[i][j]);
    }

    printf("\n");
  }
}

void main()
{
  int n, m; // 1 <= n,m <= 1000
  int matrix_a[MAX][MAX], transposed_matrix[MAX][MAX];

  read_matrix(n, m, matrix_a);
  transpose_matrix(n, m, matrix_a, transposed_matrix);

  printf("A matriz transposta é: \n");
  print_matrix(m, n, transposed_matrix);
}