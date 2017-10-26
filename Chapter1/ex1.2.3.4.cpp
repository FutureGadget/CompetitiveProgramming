#include <cstdio>
#include <set>
using namespace std;
int N, x;
set<int> s;
set<int>::iterator it;
int main() {
    scanf("%d", &N);
    while (N-- > 0) {
        scanf("%d", &x);
        s.insert(x);
    }
    for (it = s.begin(); it != s.end(); ++it) {
        printf("%d ", *it);
    }
}