#include <stdio.h>
#include <math.h>

int main()
{
    double radius, volume;
    const double pi = 3.14159;

    scanf("%lf", &radius);

    volume = (4.0 / 3.0) * pi * pow(radius, 3);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
