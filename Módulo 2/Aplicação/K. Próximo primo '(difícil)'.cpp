#include <bits/stdc++.h>

using namespace std;

vector<int> primos(int N);

int main() {

    int X;
    scanf("%d", &X);
    vector<int> Primos = primos(1e6);

    int l = 0,
        r = 1e6,
        mid = (l + r) / 2;

    while(!(mid * mid > X && (mid - 1) * (mid - 1) < X)) {
        if(mid * mid < X) {
            l = mid + 1;
        } else {
            r = mid;
        }
        mid = (l + r) / 2;
    }

    printf("%d\n", mid);

    return 0;
}

vector<int> primos(int N) {
    
    vector<int> Aux(N, 1), Primos;

    for(int i = 2; i < N; i++) {
        if(Aux[i] == 1) {
            Primos.push_back(i);
            for(int j = i + i; j < N; j += i) {
                Aux[j] = 0;
            }
        }
    }

    return Primos;
}