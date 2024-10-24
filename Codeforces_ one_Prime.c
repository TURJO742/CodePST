#include <stdio.h>

int main()
{
    int X, isPrime = 1;


    scanf("%d", &X);


    if (X <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i * i <= X; i++)
        {
            if (X % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }


    if (isPrime)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
