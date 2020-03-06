int primo(int num){
	int i, resultado = 0;
	for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    	}
	}
	if (resultado == 0)return printf("%d é um número primo\n", num);
 	else return printf("%d não é um número primo\n", num);

}