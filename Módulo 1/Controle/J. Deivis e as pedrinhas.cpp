#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Total;
    cin >> N;
    vector<string> V;
    string Aux;

    for (int i = 0; i < N; i++) {
        cin >> Aux;
        V.push_back(Aux);
    }

    sort(V.begin(), V.end());
    Total = N;

    for (int i = 0; i < N; i++) {
        if(V[i] == V[i + 1]) {
            Total--;
        }
    }

    cout << Total;

    return 0;
}