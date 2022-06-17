#include <stdio.h>
#include <math.h>

int distance(){
    double x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int gcd() { // алгоритм Евклида
    int a, b;
    scanf("%d %d", &a, &b);

    while(a != b){
        if(a > b) a -= b;
        else b -= a;
    }
    return a;
}

int reverse() {
    int x1, count = 0, r;
    scanf("%d", &x1);
    r = x1;
    while(x1 != 0){
        x1 = x1 / 10;
        count++;
    };
    printf("%d", count);
    int m[count], i;
    for (i = 0; i <= count; i++){
        m[i] = r % 10;
        r = r / 10;
    }
    for(i = 0; i < count; i++) printf("%d ", m[i]);
    return 0;
}

int primeQ() {
    int entry, res;
    scanf("%d", &entry);

    int i;
    for (i = 1; i < entry; i++){
        if (entry % i == 0){
            res = i;
        }
    }
    if (res > 1) return 0;
    else return 1;
}

double min3() {
    double a, b, c, min1, min2;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a < b) min1 = a; else min1 = b;
    if(min1 < c) min2 = min1; else min2 = c;
    return min2;
}

long int recursion(long int n){
    long int res;
    if (n == 0 || n == 1) return 1;
    res = n * recursion(n - 1);
    printf("factorial(%ld) = %ld * factorial(%ld)", n, n, n - 1);
    return res;
}

int main() {
    return 0;
}
