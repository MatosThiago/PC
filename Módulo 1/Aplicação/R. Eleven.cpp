#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, fibonacci, Aux[3] = {0, 1};
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i == (Aux[0] + Aux[1])) {
            fibonacci = 1;
            Aux[2] = Aux[0];
            Aux[0] = Aux[1];
            Aux[1] = Aux[0] + Aux[2];
        } else {
            fibonacci = 0;
        }
        if (fibonacci) {
            cout << "O";
        } else {
            cout << "o";
        }
    }

    return 0;
}