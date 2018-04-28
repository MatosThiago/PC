#include <bits/stdc++.h>

using namespace std;

vector<int> div(int X);

int main() {

    int Q, Aux[2] = {};
    cin >> Q;
    vector<int> Consulta;

    for(int i = 0; i < Q; i++) {
        scanf("%d", &Aux[0]);
        Consulta.push_back(Aux[0]);
        if(Aux[0] > Aux[1]) {
            Aux[1] = Aux[0];
        }
    }

    vector<int> Divisores = div(Aux[1]);

    for(int i = 0; i < Q; i++) {
        printf("%d\n", Divisores[Consulta[i]]);
    }

    return 0;
}

vector<int> div(int X) {
    
    vector<int> V(X+1, 0);

    for(int i = 1; i <= X; i++) {
        for(int j = i; j <= X; j+=i) {
            V[j]++;
        }
    }

    return V;
}