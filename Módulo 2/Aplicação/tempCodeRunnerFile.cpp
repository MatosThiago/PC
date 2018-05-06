for(int i = 0; i < Q; i++) {
		scanf("%d", &X);
		Aux = lower_bound(Primos.begin(), Primos.end(), X) - Primos.begin();
		if(Aux < Primos.size() && Primos[Aux] == X) {
			printf("1\n");
		} else {
			printf("0\n");
		}
	}