#include <cstdio>
#include <algorithm>
using namespace std;
int N, x;
int arr[1000001];
int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    sort(arr, arr+N);
    if (binary_search(arr, arr+N, x)) {
        printf("Exists");
    } else {
        printf("Doesn't exist");
    }
    return 0;
}