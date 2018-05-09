#include <bits/stdc++.h>

using namespace std;

class SegTree {

    private:

        vector<long long> st;

        long long size;
        long long neutro = 0;

        long long func(long long a, long long b) {
            return a + b;
        }
        void update(long long sti, long long stl, long long str, long long id, long long n) {
            if(stl == id && str == id) {
                st[sti] = n;
                return;
            }

            if(stl > id || str < id) {
                return;
            }

            long long mid = (stl + str) / 2;

            update(sti*2 + 1, stl, mid, id, n);
            update(sti*2 + 2, mid + 1, str, id, n);
            st[sti] = func(st[sti*2 + 1], st[sti*2 + 2]);
        }
        long long query(long long sti, long long stl, long long str, long long l, long long r) {
            if(stl > r || str < l) {
                return neutro;
            }

            if(stl >= l && str <= r) {
                return st[sti];
            }

            long long mid = (stl + str) / 2;

            return func(query(sti*2 + 1, stl, mid, l, r), query(sti*2 + 2, mid + 1, str, l, r));
        }

    public:

        SegTree(long long n) : st(n * 4, 0) {
            size = n;
        }

        void create(vector<long long> &V) {
            for(long long i = 0; i < V.size(); i++) {
            this->update(i, V[i]);
            }
        }
        void update(long long id, long long n) {
            update(0, 0, size - 1, id, n);
        }
        long long query(long long l, long long r) {
            return (query(0, 0, size - 1, l, r));
        }
};

int f(long long X, long long k);

int main() {

    long long k, Q, l, r;
    scanf("%lld %lld", &k, &Q);
    
    vector<long long> V(1e6 + 100, 0);

    for(long long i = 1; i < V.size(); i++) {
        V[i] = f(i, k);
    }

    SegTree ST(V.size());
    ST.create(V);
    
    for(long long i = 0; i < Q; i++) {
        scanf("%lld %lld", &l, &r);
        printf("%lld\n", ST.query(l - 1, r - 1));
    }

    return 0;
}

int f(long long X, long long k) {

    long long Aux = 1;

    for(int i = 0; i < k; i++) {
        Aux = (Aux * X) % 1000000007;
    }

    if(k == 0) {
        return 0;
    }
    if(Aux % 3 == 0) {
        return 1;
    } else {
        return 0;
    }
}
close