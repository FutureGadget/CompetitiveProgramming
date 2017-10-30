#include <cstdio>
#include <cmath>
int n;
int set[40000000/32];
int main() {
    while(scanf("%d", &n) > 0) {
        if ((set[n/32] & (1 << n%32)) == 0) {
            set[n/32] = set[n/32] | (1 << n%32);
            printf("%d ", n);
        }
    }
    return 0;
}