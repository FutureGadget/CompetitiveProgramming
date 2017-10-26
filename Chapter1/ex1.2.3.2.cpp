#include <cstdio>
#include <cmath>
int main() {
    int N;
    long double pi = M_PI;
    scanf("%d", &N);
    pi = (long)(pi * pow(10, N) + 0.5) / pow(10, N);
    printf("%.15Lg", pi);
    return 0;
}