#include <bits/stdc++.h>

using namespace std;

int main() {

    long long A, B;
    scanf("%lld %lld", &A, &B);

    if(A == B) {
        printf("1\n");
    } else {
        if(B - A >= 5) {
            printf("0\n");
        } else {
            long long Fat = 1;
            for(long long i = A + 1; i <= B; i++) {
                Fat = (Fat * (i % 10)) % 10;
            }
            printf("%lld\n", Fat);
        }
    }

    return 0;
}