/**
 * @file ex2.c
 * @author Mateus Braga - mateusbrg
 * @brief Escreva um programa que leia uma sequência de n números inteiros, 1 ≤ n ≤ 100,
 * e imprima esses números em ordem não decrescente.
 */
#include <stdio.h>

#define MIN 1
#define MAX 100

void ascending_sort(int array[], int array_length)
{
  printf("O array ordenado de forma não decrescente é:\n");

  int previous_lowest_number = MIN;
  for (int i = 0; i < array_length; i++)
  {
    int current_lowest_number = MAX;
    for (int j = 0; j < array_length; j++)
    {
      if (array[j] < current_lowest_number && array[j] > previous_lowest_number)
      {
        current_lowest_number = array[j];
      }
    }

    previous_lowest_number = current_lowest_number;

    printf("%d ", current_lowest_number);
  }
}

int main()
{
  int number_sequence[] = {23, 87, 45, 16, 32, 78, 54, 91, 62, 10, 39, 83, 27, 58, 49}; // 1 <= n <= 100
  int number_sequence_length = 15;

  ascending_sort(number_sequence, number_sequence_length);
}