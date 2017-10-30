#include <cstdio>
#include <bitset>
#include <cmath>
using namespace std;
int n;
int main() {
    bitset<33554432> set;
    while(scanf("%d", &n) > 0) {
        if (!set.test(n)) {
            set.set(n, true);
            printf("%d ", n);
        }
    }
    return 0;
}