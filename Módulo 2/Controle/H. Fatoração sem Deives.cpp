#include <bits/stdc++.h>

using namespace std;

vector<int> crivo(int N);
void fat(int N, vector<int>& V);

int main() {

    int Q, X;
    scanf("%d", &Q);
    vector<int> Crivo = crivo(10000001);

    for(int i = 0; i < Q; i++) {
        scanf("%d", &X);
        fat(X, Crivo);
        printf("\n");
    }

    return 0;
}

vector<int> crivo(int N) {

    vector<int> V(N, -1);
    
    for(int i = 2; i < N; i++) {
        if(V[i] == -1) {
            for(int j = i; j < N; j+=i) {
                if(V[j] == -1) {
                    V[j] = i;
                }
            }
        }
    }

    return V;
}

void fat(int N, vector<int>& V) {

    int Aux = 0;

    while(N > 1) {
        if(V[N] != Aux) {
            printf("%d ", V[N]);
            Aux = V[N];
        }
        N /= V[N];
    }
}