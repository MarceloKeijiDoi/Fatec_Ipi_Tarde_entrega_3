#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float vet[6] = {3.0, 4.3, 5.6, 2.8, 7.9, 3.4};
 	float media, soma = 0;
    int i;
	for(i = 0; i < 6; i++){
        soma += vet[i];
    }
	media = soma / 6;
	printf("A media dos vetores e de %.2f\n", media);
	
	return 0;
}