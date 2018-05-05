#include <bits/stdc++.h>

using namespace std;

vector<int> primos(int N);

int main() {

    int Q, Aux, Liar;
    scanf("%d", &Q);
    vector<int> Primos = primos(1e7);
    
    for(int i = 0; i < Q; i++) {
        scanf("%d", &Aux);
        Liar = lower_bound(Primos.begin(), Primos.end(), Aux) - Primos.begin();
        printf("%d\n", Primos[Liar]);
    }

    return 0;
}

vector<int> primos(int N) {
    
    vector<int> Crivo(N, 1), Primos;

    Primos.push_back(1);
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