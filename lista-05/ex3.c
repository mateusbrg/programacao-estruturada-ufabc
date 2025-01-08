/*
Escreva a função swap(a, b). Essa função recebe como parâmetro dois inteiros a e b
e não tem nenhum retorno. O comportamento dessa função deve ser o seguinte: após a execução da
mesma, os valores de a e b devem estar trocados
*/

#include <stdio.h>
#include <stdlib.h>

void print_numbers(int a, int b)
{
  printf("O valor do número A é %d e o valor do número B é %d \n", a, b);
}

void swap(int *a, int *b)
{
  int c = *a;
  *a = *b;
  *b = c;
}

int main()
{
  int first_number = 5;
  int second_number = 7;

  print_numbers(first_number, second_number);
  swap(&first_number, &second_number);
  print_numbers(first_number, second_number);

  return 0;
}