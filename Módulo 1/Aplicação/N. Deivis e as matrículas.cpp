#include <bits/stdc++.h>

using namespace std;

int main () {

    int N;
    cin >> N;
    string Aux;
    vector<pair<string, int>> V, VA;

    for (int i = 0; i < N; i++) {
        cin >> Aux;
        V.push_back(make_pair(Aux, 0));
    }

    VA = V;
    sort(VA.begin(), VA.end());

    for (int i = 0; i < N; i++) {
        VA[i].second = i;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(V[i].first == VA[j].first)
                V[i].second = VA[j].second;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << V[i].second << " ";
    }

    cout << endl;

    return 0;
}