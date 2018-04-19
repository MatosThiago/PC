#include <bits/stdc++.h>

using namespace std;

int main() {

    string S, Aux;
    cin >> S;
    vector<string> V;

    int N = S.size();

    for (int i = 1; i < (1 << N); ++i) {
        for (int j = 0; j < N; ++j) {
            if (i & (1 << j)) {
                Aux += S[j];
            }
        }
        V.push_back(Aux);
        Aux.erase();
    }

    sort(V.begin(), V.end());

    for (int i = 0; i < V.size(); i++) {
        cout << V[i] << endl;
    }

    return 0;
}