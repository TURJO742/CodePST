#include <stdio.h>

int main()
{
    int num, even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
            even_count++;
        else
            odd_count++;

        if (num > 0)
            positive_count++;
        else if (num < 0)
            negative_count++;
    }

    printf("%d valor(es) par(es)\n", even_count);
    printf("%d valor(es) impar(es)\n", odd_count);
    printf("%d valor(es) positivo(s)\n", positive_count);
    printf("%d valor(es) negativo(s)\n", negative_count);

    return 0;
}
