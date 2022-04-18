#include<stdio.h>

int main() {
    //float cur_num, prev_num;
    int indexminn = 0, minn, cur_num;

    printf("Enter sequence: ");
    scanf("%f", &minn);
    if(minn != 0) {
        for(int i = 1;; ++i) {
            scanf("%f", &cur_num);
            if(cur_num == 0) {
                break;
            }
            if(minn > cur_num) {
                minn = cur_num;
                indexminn = i;
            }
        }
    }
    printf("%d", indexminn);

    return 0;
}

