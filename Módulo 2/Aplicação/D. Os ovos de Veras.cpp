#include <bits/stdc++.h>

using namespace std;

vector<int> all_divisors(int N);

int main() {

    int M, N, X, Y, Aux;
    scanf("%d %d", &M, &N);
    N++;
    vector<int> Amigos(N, -1), Divisores;

    for(int i = 1; i <= M; i++) {
        scanf("%d %d", &X, &Y);
        Divisores = all_divisors(X);
        Y = i - Y;
        Aux = 0;
        for(int j = 0; j < Divisores.size(); j++) {
            if(Divisores[j] < N) {
                if(Amigos[Divisores[j]] < Y) {
                    Amigos[Divisores[j]] = i;
                    Aux++;
                }
            }
        }
        printf("%d\n", Aux);
    }

    return 0;
}

vector<int> all_divisors(int N) {

    vector<int> V;

    for(int i = 1; i * i <= N; i++) {
        if(N % i == 0) {
            int j = N / i;
            V.push_back(i);
            if(i != j) {
                V.push_back(j);
            }
        }
    }
    sort(V.begin(), V.end());

    return V;
}