#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    string S;
    vector<string> A, V;
    vector<pair<int, string>> Aux;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> S;
        A.push_back(S);
    }
    
    cin >> M;

    for (int i = 0; i < M; i++) {
        cin >> S;
        V.push_back(S);
    }

    sort(A.begin(), A.end());
    sort(V.begin(), V.end());

/*

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    for (int i = 0; i < M; i++) {
        cout << V[i] << " ";
    }

*/

    Aux.push_back(make_pair(1, A[0]));

    for (int i = 1, j = 0; i < N; i++) {
        if (A[i] == Aux[j].second) {
            Aux[j].first++;
        } else {
            j++;
            Aux.push_back(make_pair(1, A[i]));
        }
    }

    sort(Aux.begin(), Aux.end());

    for (int i = 0; i < Aux.size(); i++) {
        for (int j = 0; j < M; j++) {
            if(Aux[i].second == V[j]) {
                Aux[i].first--;
            }
        }
    }

    sort(Aux.begin(), Aux.end());

    if (Aux[Aux.size() - 1].first < 0) {
        cout << "0";
    } else {
        cout << Aux[Aux.size() - 1].first;
    }

    return 0;
}