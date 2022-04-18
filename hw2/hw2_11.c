#include <stdio.h>
#include <stdlib.h>

int main() {
    int length = 1, maxlength = 1, i = 0, maxi = 1, next, current;
    printf("Enter sequence: ");
    scanf("%d", &next);
    current = next;

    while(next != 0) {
        scanf("%d", &next);
        i++;
        if(current == next){
            length++;
        }
        else {
            if(length > maxlength){
                maxlength = length;
                maxi = i-1;
            }
            length = 1;
        }
        current = next;
    }
    if(length > maxlength){
        maxlength = length;
        maxi = i;
    }
    printf("%d, %d.", maxlength, maxi-maxlength+1);

    return 0;
}
