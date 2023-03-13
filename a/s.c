#include <stdio.h>

int main() {
    int day;
    printf("Enter a day number: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tues\n");
            break;
        case 3:
            printf("Wed\n");
            break;
        case 4:
            printf("Thur\n");
            break;
        case 5:
            printf("Fri\n");
            break;
        case 6:
            printf("Sat\n");
            break;
        case 7:
            printf("Sun\n");
            break;
        default:
            printf("Invalid day number\n");
            break;
    }
    return 0;
}