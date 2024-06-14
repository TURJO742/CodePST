#include <stdio.h>

int main()
{
    int values[5];
    int even_count = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (values[i] % 2 == 0)
        {
            even_count++;
        }
    }

    printf("%d valores pares\n", even_count);

    return 0;
}
