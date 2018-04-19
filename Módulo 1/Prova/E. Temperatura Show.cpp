#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K, Q, Min, Max;
    cin >> N >> K >> Q;
    vector<pair<int, int>> Livros, Chiquinha;
    int V[Q] = {};

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &Min, &Max);
        Livros.push_back(make_pair(Min, Max));
    }
    for (int i = 0; i < Q; i++) {
        scanf("%d %d", &Min, &Max);
        Chiquinha.push_back(make_pair(Min, Max));
    }

    sort(Livros.begin(), Livros.end());
    sort(Chiquinha.begin(), Chiquinha.end());

    for (int i = 0; i < Q; i++) {
        for (int j = Chiquinha[i].first; j <= Chiquinha[i].second; j++) {
            
        }
    }

    return 0;
}