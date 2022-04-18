#include<stdio.h>

int main() {
    float inches;

    printf("Enter height in inches: ");
    scanf("%f", &inches);

    printf("Height in centimeters: %f.", inches * 2.54);

    return 0;
}
