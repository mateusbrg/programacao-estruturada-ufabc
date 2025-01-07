/*
Escreva um programa que, dado um inteiro n fornecido pelo usuário, leia n números
inteiros fornecidos pelo usuário e compute a média desses números.
*/

#include <stdio.h>
#include <stdlib.h>

void read_numbers(int array[], int array_length)
{
  printf("Agora, digite %d números: \n", array_length);

  for (int i = 0; i < array_length; i++)
  {
    scanf("%d", &array[i]);
    getchar();
  }
}

void print_numbers(int array[], int array_length)
{
  for (int i = 0; i < array_length; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

double average_numbers_array(int array[], int array_length)
{
  int accumulator = 0;

  for (int i = 0; i < array_length; i++)
  {
    accumulator += array[i];
  }

  return accumulator / (double)array_length;
}

int main()
{
  int input_length;
  double result;

  printf("Digite um número inteiro: \n");
  scanf("%d", &input_length);
  getchar();

  // alocação dinâmica de memória
  int *array = malloc(input_length * sizeof(int));

  read_numbers(array, input_length);
  print_numbers(array, input_length);

  result = average_numbers_array(array, input_length);

  printf("A média dos números digitados é %.2lf", result);

  free(array);
  
  return 0;
}