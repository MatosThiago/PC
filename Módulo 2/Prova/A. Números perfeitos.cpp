#include <bits/stdc++.h>

using namespace std;

int all_divisors(int N) {

    int V = 0;

    for(int i = 1; i * i <= N; i++) {
        if(N % i == 0) {
            int j = N / i;
            V++;
            if(j != i) {
                V++;
            }
        }
    }
    return V;
}

int main() {

    int N;
    scanf("%d", &N);
    int V = all_divisors(N);

    // if(N == V) {
    //     printf("1\n");
    // } else {
    //     printf("0\n");
    // }

    printf("%d\n", V);

    return 0;
}