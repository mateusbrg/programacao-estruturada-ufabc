/**
 * @file ex5.c
 * @author Mateus Braga - mateusbrg
 * @brief No Brasil, medimos a temperatura em Celsius.
 * Já em países de lingua inglesa é muito comum que a medida de temperatura seja feita em Fahrenheit.
 * A seguinte forma nos permite estabeleceruma relação entre as duas unidades de medida
 *
 *
 * onde TC é a temperatura em Celsius e TF é a temperatura em Fahrenheit.
 * Escreva um programa em Cque seja capaz de converter um valor de temperatura
 * entre Celsius e Fahrenheit e vice-versa
 * (pergunte ao usuário qual é unidade de medida da temperatura de entrada e dê o valor convertido para a outra).
 */
#include <stdio.h>

int celsius_to_fahrenheit(int value)
{
  return (value * 9 / 5) + 32;
}

int fahrenheit_to_celsis(int value)
{
  return (value - 32) * 5 / 9;
}

int main()
{
  int input_value, option, converted_value;

  printf("Digite um valor: ");
  scanf("%d\n", &input_value);

  printf("Digite 0 para converter para Celsius (ºC)\n");
  printf("Digite 1 para converter para fahrenheit (ºF)\n");
  printf("Sua opção: ");
  scanf("%d\n", &option);

  if (option == 0)
  {
    converted_value = fahrenheit_to_celsis(input_value);
    printf("O valor %d convertido para CELSIUS é %dºC", input_value, converted_value);
  }
  else if (option == 1)
  {
    converted_value = celsius_to_fahrenheit(input_value);
    printf("O valor %d convertido para FAHRENHEIT é %dºF", input_value, converted_value);    
  }
  else
  {
    printf("Opção inválida!");
  }
  printf("Fim do programa");
}