#include <stdio.h>

int countUnits(int);

int main() {
  int number;

  printf("Введите целое положительное число: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("Ошибка, число должно быть положительным\n");
    return 1;
  }

  printf("Количество единиц в двоичной записи: %d\n", countUnits(number));

  return 0;
}

int countUnits(int number) {
  int bits = sizeof(number) * 8, counter = 0;

  for (int i = bits - 1; i >= 0; i--) {
    counter += (number >> i) & 1;
  }
  return counter;
}