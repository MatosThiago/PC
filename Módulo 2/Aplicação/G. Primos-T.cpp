#include <bits/stdc++.h>

using namespace std;

long long q(int N);
vector<int> primos(int N);

int main() {

    int Q, X;
    scanf("%d", &Q);
    vector<int> Primos = primos(1e6);

    for(int i = 0; i < Q; i++) {
        scanf("%d", &X);
        int l = 0,
            r = Primos.size() - 1,
            mid = (l + r) / 2;
        while(!(q(Primos[mid]) >= X && q(Primos[mid - 1]) < X)) {
            if(q(Primos[mid]) >= X) {
                r = mid;
            } else {
                l = mid - 1;
            }
            mid = (l + r) / 2;
        }
        printf("%d\n", l);
    }

    return 0;
}

long long q(int N) {
    return N * N;
}

vector<int> primos(int N) {
    
    vector<int> Aux(N, 1), Primos;

    for(int i = 2; i < N; i++) {
        if(Aux[i] == 1) {
            Primos.push_back(i);
            for(int j = i + i; j < N; j += i) {
                Aux[j] = 0;
            }
        }
    }

    return Primos;
}