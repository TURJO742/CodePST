#include <stdio.h>

int main()
{
    int distance;
    float fuel, consumption;

    scanf("%d", &distance);

    scanf("%f", &fuel);

    consumption = distance / fuel;

    printf("%.3f km/l\n", consumption);

    return 0;
}
