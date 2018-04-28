#include<bits/stdc++.h>

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

int main() {

    long long N, Q, R;
    long long l, r, id, n, Aux;
    scanf("%lld %lld", &N, &Q);
    vector<long long> V;

    for(long long i = 0; i < N; i++) {
        scanf("%lld", &Aux);
        V.push_back(Aux);
    }

    SegTree ST(N);
    ST.create(V);

    for(long long i = 0; i < Q; i++) {
        scanf("%lld", &R);
        if(R == 1) {
            scanf("%lld %lld", &id, &n);
            ST.update(id - 1, n);
        } else {
            scanf("%lld %lld", &l, &r);
            printf("%lld\n", ST.query(l - 1, r - 1));
        }
    }

    return 0;
}