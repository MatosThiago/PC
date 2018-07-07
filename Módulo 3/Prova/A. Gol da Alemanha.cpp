#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

vector<long long> tb(10000007, -1);

long long dp(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1 || n == 2) {
        return 1;
    }
    if(tb[n] != -1) {
        return tb[n];
    }

    tb[n] = (dp(n - 1) + dp(n - 2) + dp(n - 3)) % mod;
    return tb[n];
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%lld\n", dp(n));

    return 0;
}