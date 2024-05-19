#include <stdio.h>

int main()
{
    char name[50];
    double fixedSalary, salesTotal, finalSalary;

    scanf("%s", name);
    scanf("%lf", &fixedSalary);
    scanf("%lf", &salesTotal);

    finalSalary = fixedSalary + (salesTotal * 0.15);

    printf("TOTAL = R$ %.2lf\n", finalSalary);

    return 0;
}
