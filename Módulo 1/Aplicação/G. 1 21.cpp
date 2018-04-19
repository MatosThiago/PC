#include <bits/stdc++.h>

using namespace std;

int main() {

    string A, B;
    cin >> A >> B;
    string C = A + B;

    int R = stoi(C);

    for(int i = 0; i <= 1000; i++) {

        if(i*i > R) {
            cout << "Nao";
            break;
        }
        if(i*i == R) {
            cout << "Sim";
            break;
        }
    }

    return 0;
}
