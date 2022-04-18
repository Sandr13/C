#include<stdio.h>

int main() {
    int amount;
    float sum = 0, num;

    printf("Enter amount of numbers: ");
    scanf("%d", &amount);

    for(int i = 0; i < amount; ++i) {
        scanf("%f", &num);
        sum += num;
    }
    printf("Total: %f", sum);

    return 0;
}
