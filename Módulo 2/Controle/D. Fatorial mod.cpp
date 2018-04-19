#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    scanf("%d", &N);
    long long Fat = 1, Mod = 1000000007;

    for(int i = N; i > 0; i--) {
        Fat = (Fat * i) % Mod;
    }

    printf("%d\n", Fat);

    return 0;
}