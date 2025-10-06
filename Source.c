#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int a;
    int b;
    int age;

    printf("Введите год вашего рождения: ");
    scanf("%d", &a);

    printf("Введите текущий год: ");
    scanf("%d", &b);

    age = b - a;

    printf("Возраст: %d лет\n", age);

    return 0;
}
