#include <stdio.h>

int main()
{
    // Введение переменной
    int x;

    // Спросить у пользователя число
    printf ("Введите число от 1 до 10: ");
    scanf ("%d", &x);

    // Осудить его число
    if (x >= 1 && x <= 3)
        printf ("Вы выбрали маленькое число.\n");
    else if (x >= 4 && x <= 6)
        printf ("Вы выбрали среднее число.\n");
    else if (x >= 7 && x <= 10)
        printf ("Вы выбрали большое число.\n");
    else if (x == 67)
        for (int counter = 0; counter < 10; counter++)
            printf ("Смехуятина сикс севен %d\n", counter);
    else
        printf ("%d не находится между 1 и 10.\n", x);

    // Вернуть компьютеру код
    return 0;
}
