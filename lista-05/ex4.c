/*
Questão 4. Escreva a função inc(x). Essa função recebe apenas um parâmetro do tipo inteiro e
não tem retorno. Seu comportamento é o seguinte: após a execução de inc(x), o valor de x está
incrementado em uma unidade
*/

#include <stdio.h>

void inc(int *x)
{
  *x += 1;
}

int main()
{
  int a = 5;
  printf("O valor de a, antes de incrementar, é %d \n", a);

  inc(&a);
  printf("O valor de a, após incrementar, é %d \n", a);
}