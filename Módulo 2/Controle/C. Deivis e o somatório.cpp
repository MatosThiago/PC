#include <bits/stdc++.h>

using namespace std;

long long som(long long X);

int main() {

    long long N;
    cin >> N;
    long long l = 0, r = 2e9;
    long long mid = (l+r) / 2;

    while(!(som(mid) > N && som(mid - 1) <= N)) {
        if(som(mid) > N) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
        mid = (l+r) / 2;
    }
    
    cout << mid << endl;

    return 0;
}

long long som(long long X) {
    return (X * (X+1)) / 2;
}