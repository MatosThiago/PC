#include <bits/stdc++.h>

using namespace std;

int main() {

    int C, Aux;
    cin >> C;
    vector<int> V;

    for(int i = 0; i < C; i++) {
        cin >> Aux;
        V.push_back(Aux);
    }

    sort(V.begin(), V.end());
    Aux = 0;

    for(int i = 0; i < (C - 1); i++) {
        Aux += (V[C - 1] - V[i]);
    }

    cout << Aux;

    return 0;
}
