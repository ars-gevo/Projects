#include <stdio.h>
#include <math.h>

int main()
{
    // Выделяем память под переменные.
    char op;
    float x;
    float y;

    // Собираем уравнение.
    printf("Введите первое число: ");
    scanf("%f", &x);
    printf("Введите операцию (+, -, *, /, ^): ");
    scanf(" %c", &op);
    printf("Введите второе число: ");
    scanf("%f", &y);

    // Всевозможные варианты уравнений.
    switch(op)
    {
        case '+':
            printf("Результат: %.5f\n", x + y);
            break;
        case '-':
            printf("Результат: %.5f\n", x - y);
            break;
        case '*':
            printf("Результат: %.5f\n", x * y);
            break;
        case '/':
            if (y != 0)
                printf("Результат: %.5f\n", x / y);
            else
                printf("Ошибка: деление на ноль.\n");
            break;
        case '^':
            printf("Результат: %.5f\n", pow(x, y));
            break;
        default:
            printf("Ошибка: неверная операция.\n");
    }

    return 0;
}
