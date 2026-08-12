#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("Number of people in room: ");
        scanf("%d", &n);
    }
    while (n < 1);

    int ages[n];
    int sum = 0;

    printf("Age of people: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ages[i]);
        sum += ages[i]; 
    }

    printf("Average age in the room: %d\n", sum / n);
}
