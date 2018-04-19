#include <bits/stdc++.h>

using namespace std;

int main() {

    int Aux, L, C;

    cin >> L >> C;

    int V[L][C];
    string S;

    for(int i = 0; i < L; i++) {
        cin >> S;
        for(int j = 0; j < C; j++) {
            V[i][j] = S[j] - '0';
        }
    }

    Aux = C;
    int Left = 0;

    for(int i = 0; i < L; i++)
        for(int j = 0; j < C; j++)
            if((V[i][j] == 1) && (j < Aux)) {
                Aux = j;
                Left = j + 1;
            }

    Aux = -1;
    int Right = 0;

    for(int i = L-1; i >=0; i--)
        for(int j = (C - 1); j >= 0; j--)
            if((V[i][j] == 1) && (j > Aux)) {
                Aux = j;
                Right = j + 1;
            }

    int Down = 0;

    for(int i = 0; i < L; i++)
        for(int j = 0; j < C; j++)
            if(V[i][j] == 1) {
                Down = i + 1;
            }

    int Up = 0;

    for(int i = (L - 1); i >= 0; i--)
        for(int j = 0; j < C; j++)
            if(V[i][j] == 1) {
                Up = i + 1;
            }

    if(Left == 0 && Right == 0 && Up == 0 && Down == 0) {
        cout << "0x0\n";
    } else {
        cout << (Right - Left) + 1 << "x" << (Down - Up) + 1 << endl;
    }

    return 0;
}
