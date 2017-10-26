#include <cstdio>
bool binary_check(int *arr, int key, int first, int last) {
    int mid;
    while (first <= last) {
        mid = (first + last) / 2;
        if (arr[mid] == key) {
            return true;
        } else if (arr[mid] < key) {
            first = mid + 1;
        } else if (arr[mid] > key) {
            last = mid - 1;
        }
    }
    return false;
}
int N, x;
int arr[1000001];
int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    if (binary_check(arr, x, 0, N-1)) {
        printf("Exists");
    } else {
        printf("Doesn't exist");
    }
    return 0;
}