#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, R = 0, Aux;
    cin >> N;
    int V[N];

    for(int i = 0; i < N; i++)
        cin >> V[i];

    do {
        Aux = 0;
        for(int i = 0; i < N; i++)
            if(!(V[i] & 1)) {
                Aux++;
                V[i] = V[i] / 2;
            }
        if(Aux == N)
            R++;
    } while(Aux == N);

    cout << R;

    return 0;
}
