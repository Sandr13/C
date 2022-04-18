#include<stdio.h>

int main() {
    float cur_num, prev_num;
    int amount = 0;

    printf("Enter sequence: ");
    scanf("%f", &prev_num);
    for(int i = 1;; ++i) {
        scanf("%f", &cur_num);
        if(cur_num == 0) {
            break;
        }
        if(prev_num > cur_num) {
            printf("%d ", i + 1);
            amount++;
        }
        prev_num = cur_num;
    }
    printf("%d", amount);

    return 0;
}

