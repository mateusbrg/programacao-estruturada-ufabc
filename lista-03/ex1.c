/**
 * @file ex1.c
 * @author Mateus Braga - mateusbrg
 * @brief Neste exercício, você vai implementar o algoritmo de busca binária em um vetor ordenado.
 * Mais precisamente, você deve implementar a função abaixo que implementa esse algoritmo.
 */

// @valores é um vetor contendo n números ordenados de forma não decrescente,
// ou seja, valores[0] <= valores[1] <= valores[2] <= ...
// @n é a variável que diz quantos valores estão no vetor
// @chave é um número inteiro
// Retorno: Retorna o menor valor de i tal que valores[i] == chave.
// Caso o valor de @chave não esteja contido em @valores, retorna -1

#include <stdio.h>

int busca_binaria(int valores[], int n, int chave)
{
  int inicio = 0;
  int fim = n - 1;
  int meio;

  while (inicio < fim)
  {
    if (inicio == fim)
    {
      break;
    }

    meio = (inicio + fim) / 2;
    if (chave <= valores[meio])
    {
      fim = meio;
    }
    else
    {
      inicio = meio + 1;
    }
  }

  if (valores[inicio] == chave)
  {
    return inicio;
  }

  return -1;
}

void main()
{
  printf("Algoritmo de busca binária simples em vetor ordenado\n");

  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int array_length = 9;
  int key = 6;
  int result;

  result = busca_binaria(array, array_length, key);

  printf("O valor %d foi encontrado no vetor na posição %d\n", key, result);
}