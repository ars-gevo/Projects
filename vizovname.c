#include <stdio.h>

void PrintName(char* name);

int main(void)
{
    char ss[50];

    printf("Your name: ");
    scanf("%49s", ss);
    PrintName(ss);
}

void PrintName(char* name)
{
    printf("Hello, %s!\n", name);
}
