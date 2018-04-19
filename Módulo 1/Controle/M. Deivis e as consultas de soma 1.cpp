#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Q, l, r;
    scanf("%d %d", &N, &Q);
    long long V[N + 1] = {};

    for (int i = 1; i <= N; i++) {
        scanf("%lld", &V[i]);
        V[i] += V[i - 1];
    }

    for (int i = 0; i < Q; i++) {
        scanf("%d %d", &l, &r);
        printf("%lld\n", V[r] - V[l - 1]);
    }

    return 0;
}