#include<stdio.h>

int main() {
    float cur_num, prev_num;

    printf("Enter sequence: ");
    scanf("%f", &prev_num);
    for(;;) {
        scanf("%f", &cur_num);
        if(cur_num == 0) {
            printf("Yes.");
            break;
        }

        if(prev_num > cur_num) {
            printf("No.");
            break;
        }
        prev_num = cur_num;
    }

    return 0;
}
