#include <bits/stdc++.h>

using namespace std;

int main () {

    string S, P, Alpha = "abcdefghijklmnopqrstuvwxyz";
    cin >> S >> P;
    
    int SzS = S.size();
    int SzP = P.size();

    for (int i = 0; i < SzS; i++) {
        for (int j = 0; j < SzP; j++) {
            if(S[i] == Alpha[j])
                cout << P[j];
        }
    }

    return 0;
}