#include <bits/stdc++.h>

using namespace std;

int div(long long X);

int main() {

    long long N;
    cin >> N;

    cout << div(N) << endl;

    return 0;
}

int div(long long X) {
    
    vector<long long> V;

    for(long long i = 1; (i*i) <= X; i++) {
        if(X % i == 0) {
            long long j = X / i;
            V.push_back(i);
            if(j != i) {
                V.push_back(j);
            }
        }
    }

    return V.size();
}