#include<stdio.h>

int main() {
    int cur_amount, max_amount = 0, cur_num;

    printf("Enter sequence: ");
    for(int i = 0;; ++i) {
        scanf("%d", &cur_num);
        if(cur_num == 0) {
            if(cur_amount > max_amount) max_amount = cur_amount;
            break;
        }
        if(cur_num % 2 == 0) cur_amount++;
        else {
            if(cur_amount > max_amount) max_amount = cur_amount;
            cur_amount = 0;
        }
    }
    printf("%d", max_amount);

    return 0;
}
