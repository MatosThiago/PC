#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, X, Aux = 0;
    cin >> N >> X;
    int A[N], B[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] + B[j] == X) {
                Aux = 1;
            }
        }
    }

    cout << Aux;

    return 0;
}