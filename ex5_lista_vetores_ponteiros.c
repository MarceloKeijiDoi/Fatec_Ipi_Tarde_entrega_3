#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float vet[6] = {5.0, 4.9, 5.6, 4.5, 4.9, 4.4};
 	float media, soma = 0;
 	float *p1, *p2;
 	p1 = &media;
 	p2 = &soma;
    int i;
	for(i = 0; i < 6; i++){
        soma += vet[i];
    }
	*p1 = *p2 / 6;
	printf("A media dos vetores e de %.2f\n", media);
	
	return 0;
}