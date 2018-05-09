#include <bits/stdc++.h>

using namespace std;

class SegTree_M {

    private:

        vector<long long> st;

        long long size;
        long long neutro = -9223372036854775807;

        long long func(long long a, long long b) {
            return max(a, b);
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

        SegTree_M(long long n) : st(n * 4, 0) {
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

class SegTree_m {

    private:

        vector<long long> st;

        long long size;
        long long neutro = 9223372036854775807;

        long long func(long long a, long long b) {
            return min(a, b);
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

        SegTree_m(long long n) : st(n * 4, 0) {
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

    long long N, Q, l, r, Aux;
    scanf("%lld", &N);
    vector<long long> Lojas;

    for(long long i = 0; i < N; i++) {
        scanf("%lld", &Aux);
        Lojas.push_back(Aux);
    }

    scanf("%lld", &Q);

    SegTree_M STM(N);
    SegTree_m STm(N);
    STM.create(Lojas);
    STm.create(Lojas);

    for(long long i = 0; i < Q; i++) {
        scanf("%lld %lld", &l, &r);
        printf("%lld\n", STM.query(l - 1, r - 1) - STm.query(l - 1, r - 1));
    }

    return 0;
}