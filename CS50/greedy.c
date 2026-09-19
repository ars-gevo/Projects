#include <stdio.h>
#include <math.h>

void GetChange(int cents);

int main(void)
{
    float dollars;

    do
    {
        printf("Hi! How much change is owed?\n");
        scanf("%f", &dollars);
    }
    while (dollars < 0);

    int cents = round(dollars * 100);

    GetChange(cents);

    return 0;
}

void GetChange(int cents)
{
    int count = 0;

    while (cents >= 25)
    {
        cents -= 25;
        count++;
    }
    while (cents >= 10)
    {
        cents -= 10;
        count++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        count++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        count++;
    }

    printf("%d\n", count);
}
