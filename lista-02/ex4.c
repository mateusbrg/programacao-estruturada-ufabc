/**
 * @file ex4.c
 * @author Mateus Braga - mateusbrg
 * @brief Escreva um programa que, dados dois inteiros n e m,
 * onde 1 ≤ n,m ≤ 1000, e duas
 * matrizes A e B de ordem n×m, calcule a matriz C = A+B, onde a entrada C(i,j) = A(i, j) + B(i, j).
 */

// note: em C, não há como devolver um vetor
// então o passamos como parâmetro e modificamos seu conteúdo dentro da função.

#include <stdio.h>
#define MAX 1000

void read_matrix(int lines, int columns, int matrix[MAX][MAX])
{
  printf("Digite os valores para a matriz de ordem %dx%d\n", lines, columns);
  for (int i = 0; i < lines; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      scanf("%d ", &matrix[i][j]);
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

// only works in matrix with same n x m
void matrix_sum(int lines_size, int columns_size, int matrix_a[MAX][MAX], int matrix_b[MAX][MAX], int matrix_c[MAX][MAX])
{
  for (int i = 0; i < lines_size; i++)
  {
    for (int j = 0; j < columns_size; j++)
    {
      matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
    }
  }
}

void main()
{
  int n, m; // 1 <= n,m <= 1000
  int matrix_one[MAX][MAX], matrix_two[MAX][MAX], matrix_result[MAX][MAX];

  printf("digite o primeiro valor inteiro (n): ");
  scanf("%d", &n);

  printf("digite o primeiro valor inteiro (m): ");
  scanf("%d", &m);

  read_matrix(n, m, matrix_one);
  read_matrix(n, m, matrix_two);

  matrix_sum(n, m, matrix_one, matrix_two, matrix_result); // segmentation fault (core dumped)

  printf("A matriz resultante é\n");

  print_matrix(n, m, matrix_result);
}