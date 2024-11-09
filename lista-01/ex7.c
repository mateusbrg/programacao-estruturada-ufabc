/**
 * @file ex6.c
 * @author Mateus Braga - mateusbrg
 * @brief Escreva um programa que leia dois inteiros i e j,
 * onde i ≤ j, e que imprima todos os números primos no intervalo [i, j]
 *
 */

#include <stdio.h>

void print_prime_numbers_between(int first_number, int second_number)
{
  for (int i = first_number; i <= second_number; i++)
  {
    if (i == 1)
    {
      printf("O número %d é primo", i);
      continue;
    }

    for (int j = first_number; j <= i; i++)
    {
      if (i % j == 0)
        if (i == j)
          printf("O número %d é primo", i);
        else
          break;
    }
  }
}

int main()
{
  int i, j;

  printf("Digite o primeiro número: ");
  scanf("%d\n ", &i);
  getchar();

  printf("Digite o segundo número: ");
  scanf("%d\n ", &j);
  getchar();

  if (i > j)
  {
    printf("Por favor, digite o primeiro número MENOR que o segundo número");
    return 1;  // is right here?
  }

  print_prime_numbers_between(i, j);
}
