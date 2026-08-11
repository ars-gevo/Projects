#include <stdio.h>

int main()
{
    int height;

    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 23);

    for (int y = 0; y < height; y++) 
    {
        for (int z = height - 1; z > y; z--)
        {
            printf(" ");
        }

        for (int z = -1; z <= y; z++)
        {
            printf("#");
        }

        printf("\n");
    }
}
