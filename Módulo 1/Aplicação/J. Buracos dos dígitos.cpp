#include <bits/stdc++.h>

using namespace std;

int main () {

    int A, B, Size, R[3] = {0, 0, 0};
    cin >> A >> B;
    
    for (int i = A; i <= B; i++) {
        string Aux = to_string(i);
        Size = Aux.size();
        for (int j = 0; j < Size; j++) {
            if (Aux[j] == '0' || Aux[j] == '6' || Aux[j] == '9') {
                R[2]++;
            } else if (Aux[j] == '8') {
                R[2] += 2;
            }
        }
        if (i == A) {
            R[0] = i;
            R[1] = R[2];
        }
        if (R[2] > R[1]) {
            R[0] = i;
            R[1] = R[2];
        }
        R[2] = 0;
    }

    cout << R[0];

    return 0;
}