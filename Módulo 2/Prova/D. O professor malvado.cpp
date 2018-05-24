#include <bits/stdc++.h>

using namespace std;

int f(long long X, long long k);

int main() {

    long long k, Q, l, r;
    scanf("%lld %lld", &k, &Q);

    vector<long long> V(1e6 + 100, 0);

    V.push_back(1);
    for(long long i = 1; i < V.size(); i++) {
        V[i] = f(i, k);
        V[i] += V[i - 1];
    }

    for(long long i = 0; i < Q; i++) {
        scanf("%lld %lld", &l, &r);
        printf("%lld\n", V[r] - V[l - 1]);
    }

    return 0;
}

int f(long long X, long long k) {

    long long Aux = 1;

    for(int i = 0; i < k; i++) {
        Aux = (Aux * X) % 1000000007;
    }

    if(k == 0) {
        return 0;
    }
    if(Aux % 3 == 0) {
        return 1;
    } else {
        return 0;
    }
<<<<<<< HEAD
}
=======
}
>>>>>>> 99163f8a0ff67fc744f300cfc7212fcf19001847
