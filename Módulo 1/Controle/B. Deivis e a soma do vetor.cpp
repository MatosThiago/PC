#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Total = 0;
    scanf("%d", &N);
    int V[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    for (int i = 0; i < N; i++) {
        Total += V[i];
    }

    printf("%d", Total);

    return 0;
}