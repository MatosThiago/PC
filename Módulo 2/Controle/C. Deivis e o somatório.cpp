#include <bits/stdc++.h>

using namespace std;

long long sum(long long X);

int main() {

    long long N;
    cin >> N;
    long long l = sqrt(N), r = 2e9;
    long long mid = (l+r) / 2;

    if(N == 1) {
        cout << "2\n";
    } else {
        while(!(sum(mid) > N && sum(mid - 1) <= N)) {
            if(sum(mid) > N) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
            mid = (l+r) / 2;
        }
        cout << mid << endl;
    }

    return 0;
}

long long sum(long long X) {
    return (X/2) * (X+1);
}