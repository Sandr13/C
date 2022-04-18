#include<stdio.h>

int main() {
    float num, k;
    int number = 0;

    printf("Enter k: ");
    scanf("%f", &k);
    num = k;

    printf("Enter sequence: ");
    while(num <= k) {
        number++;
        scanf("%f", &num);
    }

    printf("Number: %d.", number);
    return 0;
}
