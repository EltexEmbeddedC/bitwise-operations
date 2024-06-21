#include <stdio.h>

int replaceThirdByte(int number, int newValue);

int main() {
  int number, newValue;

  printf("Введите целое положительное число: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("Ошибка, число должно быть положительным\n");
    return 1;
  }

  printf("Введите новое значение 3-го байта (0...255): ");
  scanf("%d", &newValue);

  if (newValue >= 0 && newValue <= 255) {
    printf("Результат: %d\n", replaceThirdByte(number, newValue));
  } else {
    printf("Ошибка, некорректное значение для байта\n");
    return 1;
  }

  return 0;
}

int replaceThirdByte(int number, int newValue) {
  number = (number & 0b11111111000000001111111111111111) | (newValue << 16);

  return number;
}