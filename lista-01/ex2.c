/**
 * @file ex2.c
 * @author Mateus Braga - mateusbrg
 * @brief Escreva um programa em C que leia um número n do usuário
 * e imprima todos os números primos no intervalo [1,n]
 *
 */

#include <stdio.h>

void print_prime_numbers_until(int number)
{
  printf("Os números primos no intervalo [1, %d] são:\n", number);
  if (number == 1)
  {
    printf("%d\n", number);
    return;
  }

  for (int i = 2; i <= number; i++)
  {
    for (int j = 2; j <= i; j++)
      if (i % j == 0)  
        if (i == j)
          printf("%d\n", i);
        else
          break;
  }
}

int main()
{
  int input_number;

  printf("digite um número positivo: ");
  scanf("%d\n ", &input_number);

  print_prime_numbers_until(input_number);

  printf("Fim do programa.");
}