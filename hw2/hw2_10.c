#include<stdio.h>
#include <stdbool.h>

int main() {
    int cur_amount = 1, amount = 0, cur_num, prev_num;
    bool flag = 0; // 1 mean prev - less

    printf("Enter sequence: ");
    scanf("%d", &prev_num);
    if(prev_num == 0) printf("Empty sequence.");
    else {
        for(int i = 0;; ++i) {
            scanf("%d", &cur_num);

            if(cur_num == 0) {
                if(cur_amount != 1) printf("%d ", cur_amount);
                break;
            }

            if(cur_num > prev_num) {
                cur_amount++;
                if(!flag) amount++;
                flag = 1;
            }
            else {
                cur_amount = 1;
                flag = 0;
            }
            prev_num = cur_num;
        }
        printf("%d", amount);
    }

    return 0;
}
