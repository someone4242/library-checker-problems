#include <iostream>
#include "random.h"
#include "../params.h"

using namespace std;
using ll = long long;

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int n = N_MAX;

    vector<int> f(n);
    for (int i = 0; i < n; i++) {
        f[i] = gen.uniform<int>(0, MOD - 1);
    }
    int m = gen.uniform(1, n);
    for (int i = 0; i < m; i++) {
        f[i] = 0;
    }

    printf("%d\n", n);

    for (int i = 0; i < n; i++) {
        printf("%d", f[i]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
