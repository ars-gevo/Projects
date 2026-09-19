#include <stdio.h>

int main()
{
    int x;

    do {
        printf("/waterminutes: ");
        scanf("%d", &x);
    } while (x < 1);

    printf("bottles: %d\n", x * 12);
}
