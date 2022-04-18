#include<stdio.h>
#include <stdbool.h>

int main() {
    int cur_amount = 1, cur_num;
    bool flag = 1; // 0 - чёт, 1 - нечёт

    scanf("%d", &cur_num);
    if(cur_num % 2 == 0) flag = 0;

    printf("Enter sequence: ");
    for(int i = 0;; ++i) {
        scanf("%d", &cur_num);
        if(cur_num == 0) {
            printf("%d", cur_amount);
            break;
        }
        if(cur_num % 2 == 0) {
            if(!flag) cur_amount++;
            else {
                printf("%d ", cur_amount);
                cur_amount = 1;
                flag = !flag; // flag = 0
            }
        }
        else {
            if(flag) cur_amount++;
            else {
                printf("%d ", cur_amount);
                cur_amount = 1;
                flag = !flag; // flag = 1
            }
        }
    }

    return 0;
}
