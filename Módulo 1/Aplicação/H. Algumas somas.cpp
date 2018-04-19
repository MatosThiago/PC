#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, A, B, R = 0, Aux, V[5];
    cin >> N >> A >> B;

    for(int i = 0; i <= N; i++) {
        V[4] = i % 10;
        V[3] = (i / 10) % 10;
        V[2] = (i / 100) % 10;
        V[1] = (i / 1000) % 10;
        V[0] = (i / 10000) % 10;
        Aux = V[0] + V[1] + V[2] + V[3] + V[4];

        if(Aux >= A && Aux <= B)
            R += i;
    }

    cout << R;

    return 0;
}
