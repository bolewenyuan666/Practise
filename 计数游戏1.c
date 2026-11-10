#include <stdio.h>

int main() {
    long long n;
    int x;
    scanf("%lld %d", &n, &x);

    long long count = 0;
    long long i=1; 
    for (; i <= n; i++) {
        long long t = i;
        while (t > 0) {
            if (t % 10 == x) {
                count++;
            }
            t /= 10;
        }
    }

    printf("%lld\n", count);
    return 0;
}
