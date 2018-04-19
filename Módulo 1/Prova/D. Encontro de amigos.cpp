#include <bits/stdc++.h>

using namespace std;

int main() {

    int Y, J, AY[2] = {}, AJ[2] = {};

    cin >> Y >> J;

    for (int i = Y; i != J; Y < J ? i++ : i--) {
        if (i % 2 == 0) {
            AY[0]++;
            AY[1] += AY[0];
        } else {
            AJ[0]++;
            AJ[1] += AJ[0];
        }
    }

    cout << AY[1] + AJ[1];

    return 0;
}