#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, V[4];
    cin >> N;

    int Bonito = 0;

    while(!Bonito) {
        N++;
        V[3] = N % 10;
        V[2] = (N / 10) % 10;
        V[1] = (N / 100) % 10;
        V[0] = (N / 1000) % 10;

        if(V[0] != V[1] && V[0] != V[2] && V[0] != V[3] && V[1] != V[2] && V[1] != V[3] && V[2] != V[3])
            Bonito = 1;
    }

    cout << N;

    return 0;
}
