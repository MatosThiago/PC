#include <bits/stdc++.h>

using namespace std;

void permut(string S, int i);

int main() {

    string S;
    cin >> S;

    permut(S, 0);

    return 0;
}

void permut(string S, int i) {

    if (i == S.size()) {
        cout << S << endl;
    } else {
        for (int j = i; j < S.size(); j++) {
            swap(S[j], S[i]);
            permut(S, i + 1);
        }
    }
}