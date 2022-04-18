#include<stdio.h>

int main() {
    int amount;
    float min, num;

    printf("Enter amount of numbers: ");
    scanf("%d", &amount);

    scanf("%f", &num);
    min = num;
    for(int i = 1; i < amount; ++i) {
        scanf("%f", &num);
        if(num < min) min = num;
    }
    printf("Minimum: %f", min);

    return 0;
}
