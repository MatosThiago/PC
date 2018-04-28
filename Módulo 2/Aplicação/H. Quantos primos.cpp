#include <bits/stdc++.h>

using namespace std;

vector<int> crivo(int N);

int main() {

    int Q, l, r;
    scanf("%d", &Q);

    for(int i = 0; i < Q; i++) {
        scanf("%d %d", &l, &r);
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