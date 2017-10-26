#include <cstdio>
#include <algorithm>
using namespace std;
int alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
int main() {
    sort(alpha, alpha+10);
    do {
        for (int i = 0; i < 10; ++i) {
            printf("%c", alpha[i]);
        }
        printf("\n");
    } while(next_permutation(alpha, alpha+10));
    return 0;
}