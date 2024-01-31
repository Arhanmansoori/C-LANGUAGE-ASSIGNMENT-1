#include <stdio.h>

int main() {
    int hours, minutes;
    printf("Enter time (HH:MM): ");
    scanf("%d:%d", &hours, &minutes);
    printf("%d Hour and %d Minute\n", hours, minutes);

    return 0;
}

