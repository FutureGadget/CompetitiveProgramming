#include <cstdio>
#include <vector>
using namespace std;
int N;
void subset(int next, vector<int> v) {
    for (int i = 0; i < v.size(); ++i) {
        printf("%d ", v[i]);
    }
    printf("\n");
    for (int i = next; i < N; ++i) {
        v.push_back(i);
        subset(i+1, v);
        v.pop_back();
    }
}
int main() {
    vector<int> v;
    scanf("%d", &N);
    subset(0, v);
}