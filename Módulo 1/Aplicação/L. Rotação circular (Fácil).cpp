#include <bits/stdc++.h>

using namespace std;

int main () {

    int N;
    cin >> N;
    int V[N], P[N + 1] = {}, Aux[2];

    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    for (int i = 0; i < N; i++) {
        Aux[0] = i + 1;
        Aux[1] = V[i];
        if (Aux[0] - Aux[1] == 0) {
            P[N]++;
        } else {
            if ((Aux[1] - Aux[0]) < 0) {
                P[N + (Aux[1] - Aux[0])]++;
            } else {
                P[Aux[1] - Aux[0]]++;
            }
        }
    }

    Aux[0] = 0;
    Aux[1] = 0;

    for (int i = 1; i <= N; i++) {
        if (P[i] > Aux[1]) {
            Aux[0] = i;
            Aux[1] = P[i];
        }
    }

    for (int i = 0; i < N; i++) {
        cout << P[i] << " ";
    }


    cout << endl << Aux[0];

    return 0;
}