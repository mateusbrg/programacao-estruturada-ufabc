/**
 * Lembrar em todos os programas!
 * valgrind --leak-check=full /caminho-do-programa
 * gcc -Wall -Wextra -Wvla -g -std=c99 arquivo.c
 */
#include <stdio.h>

void count_down(int n) {
  if (n == 0) {
    printf("ACABOU!\n");
    return;
  }

  printf("%d\n", n);
  return count_down(n - 1);
}

int main() {
  int number = 5;
  count_down(number);

  return 0;
}