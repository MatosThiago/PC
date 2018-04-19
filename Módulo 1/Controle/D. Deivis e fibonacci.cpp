#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Aux[3] = {0, 1};
    cin >> N;

    for (int i = 0; i != N; i++) {
        Aux[2] = Aux[1];
        Aux[1] = Aux[0] + Aux[1];
        Aux[0] = Aux[2];
    }

    cout << Aux[0];

    return 0;
}