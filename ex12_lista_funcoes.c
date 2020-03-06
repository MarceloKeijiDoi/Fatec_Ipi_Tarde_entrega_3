
int verifica_repeticao(int i, int j,int vet[]){
	int n;
	for (i = 0;i < n ;i++){
		for(j = i + 1;j < n;j++){
			if (vet[i]==vet[j])
				 printf("O numero %i se repete", vet[i]);
		}
	}
}