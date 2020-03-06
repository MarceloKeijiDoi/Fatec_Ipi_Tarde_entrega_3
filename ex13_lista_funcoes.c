#include <stdio.h>

char troca(char v, char c , int aux){
    for (i=0; i < 4; i++) {
        for(j=0;j<4; j++){
       aux = v[i];
       v[i] = c[j];
       c[j] = aux;
        }
    }