#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int entrada[10],saida[10],i,j,k,n;
	int soma=0,cont=0;
	printf("inserir 10 inteiros com repetição:\n");
	
	for(i = 0;i < 10; i++){
		scanf("%d", &entrada[i]);
		}
	for ( i = 1; i < 10; i++){
		for(j = 0;j<10;j++){
			if (entrada[i-1]!=entrada[i])
      			saida[j] = entrada[i];
      		return 0;
		}
		printf("\n%d" , saida[j]);
	}

	return 0;	
}