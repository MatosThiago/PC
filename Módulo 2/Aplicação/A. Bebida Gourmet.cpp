#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Q, Aux, Liar;
    scanf("%d", &N);
    vector<int> P;

    for(int i = 0; i < N; i++) {
        scanf("%d", &Aux);
        P.push_back(Aux);
    }

    sort(P.begin(), P.end());
    scanf("%d", &Q);

    for(int i = 0; i < Q; i++) {
        scanf("%d", &Aux);
        Liar = lower_bound(P.begin(), P.end(), Aux) - P.begin();
        if(Liar > P.size()) {
            printf("%d ", P.size() + 1);
        } else {
            if(P[Liar] == Aux) {
                printf("%d ", Liar + 1);
            } else {
                printf("%d ", Liar);
            }
        }
    }

    return 0;
}