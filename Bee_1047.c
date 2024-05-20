#include <stdio.h>

int main()
{
    int startHour, startMinute, endHour, endMinute;
    int durationHour, durationMinute;

    // Reading the input values
    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

    // Converting start and end times to minutes
    int startTotalMinutes = startHour * 60 + startMinute;
    int endTotalMinutes = endHour * 60 + endMinute;

    // Calculate the total duration in minutes
    int durationTotalMinutes;

    if (endTotalMinutes > startTotalMinutes)
    {
        durationTotalMinutes = endTotalMinutes - startTotalMinutes;
    }
    else
    {
        durationTotalMinutes = (24 * 60 - startTotalMinutes) + endTotalMinutes;
    }

    // Convert total duration back to hours and minutes
    durationHour = durationTotalMinutes / 60;
    durationMinute = durationTotalMinutes % 60;

    // Output the result
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHour, durationMinute);

    return 0;
}
