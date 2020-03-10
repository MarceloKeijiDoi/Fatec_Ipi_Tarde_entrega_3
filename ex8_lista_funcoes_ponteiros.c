#include<stdio.h>
#include <locale.h>

int primo(int num){
	int *p1, *p2;
	int i, resultado = 0;
	p1 = &num;
	p2 = &resultado;
	for (i = 2; i <= *p1 / 2; i++) {
    if (*p1 % i == 0) {
       resultado++;
	   //*p2++;
       break;
    	}
	}
	if (resultado == 0)return printf("%d é um número primo\n", num);
 	else return printf("%d não é um número primo\n", num);

}
 