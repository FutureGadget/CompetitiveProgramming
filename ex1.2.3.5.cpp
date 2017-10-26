#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int,int> pii;
typedef pair<int, pii> piii;
int N,i;
vector<piii> p;
int main () {
    scanf("%d", &N);
    p.resize(N);
    for (i = 0; i < N; ++i) {
        scanf(" (%d,%d,%d)", &p[i].second.first, &p[i].first, &p[i].second.second);
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < N; ++i) {
        printf("(%d,%d,%d)\n", p[i].second.first, p[i].first, p[i].second.second);
    }
    return 0;
}