/**
 * @file ex3.c
 * @author Mateus Braga - mateusbrg
 * @brief Escreva uma função em C que compute o valor de n!, onde n ∈ N.
 */
#include <stdio.h>

int factorial(int number) {
  int accumulator = 1;
  for (int i = number; i > 0; i--)
    accumulator = accumulator * i;
  
  return accumulator;
}

int main() {
  int input_number, result;
  printf("Digite um número inteiro para obter o fatorial: ");
  scanf("%d\n", &input_number);

  result = factorial(input_number);

  printf("O fatorial de %d é %d\n", input_number, result);

  return 0;
}