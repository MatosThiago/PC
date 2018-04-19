#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, Aux;
    cin >> N;
    vector<pair<int, int>> V, P;

    for (int i = 0; i < N; i++) {
        cin >> Aux;
        V.push_back(make_pair(Aux, 0));
    }

    P = V;

    for (int i = 0; i < (N - 1); i++) {
        if (V[i].first > V[i + 1].first) {
            V[i].second++;
            swap(V[i + 1], V[i]);
        } else {
            V[i + 1].second++;
        }
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (P[i].first == V[j].first)
                P[i].second = V[j].second;

    for (int i = 0; i < N; i++)
        cout << P[i].second << " ";

    cout << endl;

    return 0;
}