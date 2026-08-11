#include <stdio.h>

int Cubing(int);

int main(void)
{
    int x;
    int y;

    printf("Please give a number: ");
    scanf("%d", &x);
    printf("Cubing...\n");
    y = Cubing(x);
    printf("Cubed!\n");
    printf("%d cubed is %d\n", x, y);
}

int Cubing(int n)
{
    return n * n * n;
}
