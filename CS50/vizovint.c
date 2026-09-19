#include <stdio.h>

int GetPositiveInt(void);

int main()
{
    int num;
    num = GetPositiveInt();
    printf("Thanks for %d\n", num);
}

int GetPositiveInt(void)
{
    int num;

    do
    {
        printf("Give me a positive int: ");
        scanf("%d", &num);
    }
    while(num < 1);

    return num;
}
