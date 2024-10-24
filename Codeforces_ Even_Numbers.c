#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int foundEven = 0;

    for (int i = 2; i <= N; i += 2)
    {
        printf("%d\n", i);
        foundEven = 1;
    }

    if (!foundEven)
    {
        printf("-1\n");
    }

    return 0;
}
