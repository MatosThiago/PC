#include <bits/stdc++.h>

using namespace std;

vector<int> primos(int N);

int main() {

    int Q, l, r;
    scanf("%d", &Q);
    vector<int> Primos = primos(1e6);

    for(int i = 0; i < Q; i++) {
        scanf("%d %d", &l, &r);
        auto L = lower_bound(Primos.begin(), Primos.end(), l);
        auto R = lower_bound(Primos.begin(), Primos.end(), r);
        if(*R != r) {
            R--;
        }
        printf("%d\n", distance(L, R) + 1);
    }

    return 0;
}

vector<int> primos(int N) {

    vector<int> Crivo(N, 1), Primos;

    for(int i = 2; i < N; i++) {
        if(Crivo[i] == 1) {
            Primos.push_back(i);
            for(int j = i + i; j < N; j += i) {
                Crivo[j] = 0;
            }
        }
    }

    return Primos;
}