/**
 * @file ex1.c
 * @author Mateus Braga - mateusbrg
 * @brief Escreva uma função em C que compute o valor de n!, onde n ∈ N.
 *
 @valores é um vetor contendo os n números
* @n é a variável que diz quantos valores estão no vetor
* @chave é um número inteiro
* Retorno: Sua função deve retornar i se valores[i] == chave.
* Se o valor 'chave' não está no vetor, então sua função
* deve retornar -1
int busca(int valores[], int n, int chave);
 */

#include <stdio.h>

int busca(int valores[], int n, int chave)
{
  for (int i = 0; i < n; i++)
  {
    if (valores[i] == chave)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int array_length = 8;
  int key = 6;
  int result;

  result = busca(array, array_length, key);

  printf("Posição da chave no array: %d\n", result);
}