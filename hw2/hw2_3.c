#include<stdio.h>

int main() {
    int amount = 0;
    float sum = 0, num;

    for(;;) {
        scanf("%f", &num);
        if(num == 0) break;
        sum += num;
        amount++;
    }
    printf("Total: %f, amount: %d", sum, amount);

    return 0;
}
