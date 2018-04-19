#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K, Aux;
    cin >> N >> K;
    Aux = N;

    while(N >= K) {
        N = (N - K) + 1;
        Aux++;
    }

    cout << Aux;

    return 0;
}
