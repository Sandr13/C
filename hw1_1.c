#include<stdio.h>

int main() {
    int years, days;

    printf("Enter years: ");
    scanf("%d", &years);

    days = 365 * years;

    printf("%d years: %d days.", years, days);

    return 0;

}
