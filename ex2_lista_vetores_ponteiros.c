#include <stdio.h>

int main ()

{	
	int vet[4]={1,3,5,2};
	int *p1 , *p2;
	int i, maior = vet[0];
	p1 = &maior;
	p2 = &vet[i];
	for(i=1; i<4; i++)
	{
		if(*p1 < *p2)
			{
			*p1 = *p2;
	}
		}
		printf("O maior :%d\n",maior);
	
	return 0;	
}