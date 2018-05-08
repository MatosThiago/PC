#include <bits/stdc++.h>

using namespace std;

int main() {

    long long N;
    scanf("%lld", &N);
    long long Aux = N;
    N = 1;
    
    for(int i = 1; i <= Aux; i++) {
        N = (N * 2) % 1000000007;
    }

    printf("%lld\n", N);

    return 0;
}