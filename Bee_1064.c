#include <stdio.h>

int main()
{
    float numbers[6];
    int positive_count = 0;
    float sum = 0.0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &numbers[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] > 0)
        {
            positive_count++;
            sum += numbers[i];
        }
    }

    float average = sum / positive_count;

    printf("%d valores positivos\n", positive_count);
    printf("%.1f\n", average);

    return 0;
}
