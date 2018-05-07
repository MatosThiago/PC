#include <bits/stdc++.h>

using namespace std;

int main() {

    long long A, B;
    cin >> A >> B;
    double FatA = 1, FatB = 1;

    for(long long i = A; i > 0; i--) {
        FatA = (FatA * i);
    }

    for(long long i = B; i > 0; i--) {
        FatB = (FatB * i);
    }

    printf("%d\n", int(FatB / FatA) % 10);

    return 0;
}
