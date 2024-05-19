#include <stdio.h>

int main()
{
    int time, speed;
    float distance, fuel;

    scanf("%d", &time);
    scanf("%d", &speed);

    distance = time * speed;

    fuel = distance / 12.0;

    printf("%.3f\n", fuel);

    return 0;
}
