/**
 * @file ex2.c
 * @author Mateus Braga - mateusbrg
 * @brief Escreva um programa que leia uma sequência de n números inteiros, 1 ≤ n ≤ 100, e
 * imprima esses números em ordem não crescente.
 * TODO: e se os números forem repetidos?
 */

#include <stdio.h>

#define MIN 1
#define MAX 100

void descending_sort(int array[], int array_length)
{
  printf("O array ordenado de forma não crescente é:\n");

  int previous_highest_number = MAX;
  for (int i = 0; i < array_length; i++)
  {
    int current_highest_number = MIN;
    for (int j = 0; j < array_length; j++)
    {
      if (array[j] > current_highest_number && array[j] < previous_highest_number)
      {
        current_highest_number = array[j];
      }
    }
    previous_highest_number = current_highest_number;

    printf("%d ", current_highest_number);
  }
}

int main()
{
  int number_sequence[] = {23, 87, 45, 16, 32, 78, 54, 91, 62, 10, 39, 83, 27, 58, 49}; // 1 <= n <= 100
  int number_sequence_length = 15;

  descending_sort(number_sequence, number_sequence_length);
}