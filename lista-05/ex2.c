/*
Escreva um programa que, dado um inteiro n fornecido pelo usuário, leia n caracteres
fornecidos pelo usuário e as armazene em um vetor. Na sequência, para cada uma das n entradas
armazenadas no vetor, o seu programa deve imprimir a seguinte linha: “entrada xxx, conteudo
yyy, endereco: zzz”, onde xxx deve ser substituído pelo índice da entrada, yyy pelo conteúdo
dessa entrada no array e zzz pelo endereço de memória dessa entrada em decimal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void read_numbers(int array[], int array_length)
{
  printf("Lendo %d números: \n", array_length);

  for (int i = 0; i < array_length; i++)
  {
    scanf("%d", &array[i]);
    getchar();
  }
}

void print_array_metadata(int array[], int array_length)
{
  for (int i = 0; i < array_length; i++)
  {
    printf("entrada %d, conteudo %d, endereço %lu \n", i, array[i], (uintptr_t)&array[i]);
  }
}

int main()
{
  int input_array_length;

  printf("Digite um número inteiro: \n");
  scanf("%d", &input_array_length);
  getchar();

  int *array = malloc(input_array_length * sizeof(int));
  read_numbers(array, input_array_length);
  print_array_metadata(array, input_array_length);

  return 0;
}