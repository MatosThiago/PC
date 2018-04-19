#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, R[3] = {}, Total = 0, Aux;
    cin >> N;
    int V[N];

    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    for (int j = 0, i = (N - 1), k = 0; j <= i; k++) {
        if(k % 2 == 0) {
            Aux = j;
            while (Aux <= i) {
                if (Aux == j) {
                    R[1] = V[Aux];
                } else {
                    R[2] = R[1];
                    R[1] = ((R[1] * 2) + V[Aux]) - R[0];
                    R[0] = R[2];
                }
                Aux++;
            }
            j++;
        } else {
            Aux = i;
            while (Aux >= j) {
                if (Aux == i) {
                    R[1] = V[Aux];
                } else {
                    R[2] = R[1];
                    R[1] = ((R[1] * 2) + V[Aux]) - R[0];
                    R[0] = R[2];
                }
                Aux--;
            }
            i--;
        }
        Total += R[1];
        R[0] = 0;
        R[1] = 0;
        R[2] = 0;
    }

    cout << Total;

    return 0;
}