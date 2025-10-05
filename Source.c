#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int birth_day, birth_month, birth_year;
    int current_day, current_month, current_year;
    int age;

    printf("Введите дату рождения (дд мм гггг): ");
    scanf("%d %d %d", &birth_day, &birth_month, &birth_year);

    printf("Введите текущую дату (дд мм гггг): ");
    scanf("%d %d %d", &current_day, &current_month, &current_year);

    age = current_year - birth_year;

    if (current_month < birth_month || (current_month == birth_month && current_day < birth_day)) 
    {
        age--;
    }

    printf("Возраст: %d лет\n", age);

    return 0;
}
