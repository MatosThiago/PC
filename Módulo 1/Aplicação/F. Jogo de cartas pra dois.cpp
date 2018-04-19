#include <bits/stdc++.h>

using namespace std;

int main() {

    int C, N;
    long long Alice = 0, Bob = 0;
    cin >> C;
    vector<long> V;

    for(int i = 0; i < C; i++) {
        cin >> N;
        V.push_back(N);
    }
    
    sort(V.begin(), V.end());

    for(int i = 0; i < C; i++) {
        if(i % 2 == 0) {
            Alice += V.back();
            V.pop_back();
        } else {
            Bob += V.back();
            V.pop_back();
        }
    }

    cout << Alice - Bob;

    return 0;
}
