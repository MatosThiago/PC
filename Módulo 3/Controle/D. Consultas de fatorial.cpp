#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

vector<long long> tb(1e6 + 7, -1);

long long dp(int n) {
    if(n == 0) {
        return 1;
    }
    if(n == 1) {
        return 1;
    }
    if(tb[n] != -1) {
        return tb[n];
    }

    tb[n] = (n * dp(n - 1)) % mod;
    return tb[n];
}

int main() {

    int q;
    scanf("%d", &q);

    for(auto i = 0; i < q; i++) {
        int x;
        scanf("%d", &x);
        printf("%lld\n", dp(x));
    }

    return 0;
}