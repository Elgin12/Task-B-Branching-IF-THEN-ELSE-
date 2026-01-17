//Elgin Gjyzeli AI25
#include <stdio.h>

int main() {
    int hour, minute;
    char period[3];

    do {
        printf("Enter hours (0-23): ");
        scanf("%d", &hour);
        if (hour < 0 || hour > 23) {
            printf("Invalid hour. Please enter a value between 0 and 23.\n");
        }
    } while (hour < 0 || hour > 23);
    do {
        printf("Enter minutes (0-59): ");
        scanf("%d", &minute);
        if (minute < 0 || minute > 59) {
            printf("Invalid minutes. Please enter a value between 0 and 59.\n");
        }
    } while (minute < 0 || minute > 59);

    if (hour == 0) {
        hour = 12;
        period[0] = 'A';
        period[1] = 'M';
        period[2] = '\0';
    } else if (hour == 12) {
        period[0] = 'P';
        period[1] = 'M';
        period[2] = '\0';
    } else if (hour > 12) {
        hour -= 12;
        period[0] = 'P';
        period[1] = 'M';
        period[2] = '\0';
    } else {
        period[0] = 'A';
        period[1] = 'M';
        period[2] = '\0';
    }

    printf("12-hour format: %d:%d %s \n", hour, minute, period);

    return 0;
}

