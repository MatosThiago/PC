#include <bits/stdc++.h>

using namespace std;

vector<int> moedas;

int main() {

    int n, x;
    scanf("%d %d", &n, &x);

    for(auto i = 0; i < n; i++) {
        int aux;
        scanf("%d", &aux);
        moedas.push_back(aux);
    }

    return 0;
}