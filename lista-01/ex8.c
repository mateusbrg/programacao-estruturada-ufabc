/**
 * @file ex8.c
 * @author Mateus Braga - mateusbrg
 * @brief Escreva um programa em C que leia um número inteiro n
 * fornecido pelo usuário e imprima Fn,
 * onde Fn é o n-ésimo número de Fibonacci que é deﬁnido como:
 *
 * describe better later
 * */

#include <stdio.h>

int terms_of_fibonacci(int terms)
{
  if ((terms == 1) || (terms == 2))
  {
    return 1;
  }

  int current_value_in_sequence = 0;  // inicialize current value 0
  int previous_value_in_sequence = 1;  // inicialize valuating 1 for initial sum
  int old_value;
  for (int i = 0; i < terms; i++)
  {
    old_value = current_value_in_sequence;
    current_value_in_sequence += previous_value_in_sequence;
    previous_value_in_sequence = old_value;
  }

  return current_value_in_sequence;
}

int main()
{
  int n, searched_term;

  printf("Qual termo da sequência fibonacci deseja imprimir?: ");
  scanf("%d", &n);

  searched_term = terms_of_fibonacci(n);

  printf("\nO %dº termo da sequência fibonacci é %d\n", n, searched_term);
}
