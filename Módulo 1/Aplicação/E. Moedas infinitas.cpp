#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, A;
    cin >> N >> A;

    while(N >= 500) {
        N -= 500;
    }

    if(A > N) {
        cout << "Sim";
    } else {
        cout << "Nao";
    }

    return 0;
}
