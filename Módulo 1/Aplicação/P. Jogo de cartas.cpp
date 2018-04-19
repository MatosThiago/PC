#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, M, Deivis = 0, Veras = 0, Aux;
    cin >> N >> M;
    vector<int> D, V;

    for (int i = 0; i < N; i++) {
        cin >> Aux;
        D.push_back(Aux);
    }
    for (int i = 0; i < M; i++) {
        cin >> Aux;
        V.push_back(Aux);
    }

    sort(D.begin(), D.end());
    sort(V.begin(), V.end());

    for (int i = 0; i < N && i < M; i++) {
        if (D.back() > V.back()) {
            Deivis++;
        } else {
            Veras++;
        }
        D.pop_back();
        V.pop_back();
    }

    cout << Deivis << " " << Veras;

    return 0;
}