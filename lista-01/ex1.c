/**
 * @file ex1.c
 * @author Mateus Braga - mateusbrg
 * @brief Escreva um programa em C que leia um número n do usuário e
 * imprima todos os números pares do intervalo [0,n].
 *
 */

#include <stdio.h>

void print_even_numbers_until(int number)
{
  printf("Os seguintes números no intervalo [0, %d] são pares:\n", number);
  for (int i = 0; i <= number; i++)
    if (i % 2 == 0)
      printf("%d\n", i);
}

int main()
{
  int input_number;
  printf("digite um número positivo: ");
  scanf("%d\n ", &input_number);

  print_even_numbers_until(input_number);

  printf("fim do programa");

  return 0;
}
