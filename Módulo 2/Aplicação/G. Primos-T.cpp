#include <bits/stdc++.h>

using namespace std;

vector<long long> primos(int N);

int main() {

	int Q;
	scanf("%d", &Q);
	long long X, Aux;
	vector<long long> Primos = primos(1e6 + 1);

	for(int i = 0; i < Q; i++) {
		scanf("%lld", &X);
		Aux = lower_bound(Primos.begin(), Primos.end(), X) - Primos.begin();
		if(Aux < Primos.size()) {
			printf("%lld\n", Primos[Aux] == X ? 1 : 0);
		} else {
			printf("0\n");
		}
	}

	return 0;
}

vector<long long> primos(int N) {

	vector<long long> Primos;
	vector<int> Aux(N, 1);

	for(long long i = 2; i < N; i++) {
		if(Aux[i] == 1) {
			Primos.push_back(i * i);
			for(int j = i + i; j < N; j += i) {
				Aux[j] = 0;
			}
		}
	}

	return Primos;
}