#include <bits/stdc++.h>

using namespace std;

int main() {

    int M[5][5], Aux;
    vector<pair<int, int>> A, B, C, D, E;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &Aux);
        A.push_back(make_pair(i, Aux);
    }
    for (int i = 0; i < 5; i++) {
        scanf("%d", &Aux);
        B.push_back(make_pair(i, Aux);
    }
    for (int i = 0; i < 5; i++) {
        scanf("%d", &Aux);
        C.push_back(make_pair(i, Aux);
    }
    for (int i = 0; i < 5; i++) {
        scanf("%d", &Aux);
        D.push_back(make_pair(i, Aux);
    }
    for (int i = 0; i < 5; i++) {
        scanf("%d", &Aux);
        E.push_back(make_pair(i, Aux);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            switch (i) {
                case 0: 
                    M[i][j] = A[j];
                    break;
                case 1: 
                    M[i][j] = B[j];
                    break;
                case 2: 
                    M[i][j] = C[j];
                    break;
                case 3: 
                    M[i][j] = D[j];
                    break;
                case 4: 
                    M[i][j] = E[j];
                    break;
            }
        }
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());
    sort(D.begin(), D.end());
    sort(E.begin(), E.end());

    for (int i = 0; i < 5; i++) {
        
    }

    return 0;
}