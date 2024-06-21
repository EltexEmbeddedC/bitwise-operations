#include <stdio.h>

void printBinary(int);

int main() {
  int number;

  printf("Введите целое положительное число: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("Ошибка, число должно быть положительным\n");
    return 1;
  }

  printf("Двоичное представление числа %d: ", number);
  printBinary(number);

  return 0;
}

void printBinary(int number) {
  int bits = sizeof(number) * 8;

  for (int i = bits - 1; i >= 0; i--) {
    int bit = (number >> i) & 1;
    printf("%d", bit);
  }
  printf("\n");
}