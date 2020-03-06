
int inverte(char numeros[],int i, int j, int aux){
	
	for (i=0; i < 4; i++) {
       		j=8-i-1;       //não deu pra fazer dentro do laço...
       aux = numeros[i];
       numeros[i] = numeros[j];
       numeros[j] = aux;
	}

}