#include <stdio.h>
#include <stdlib.h>

void maior_numero(int a, int b, int *p1, int *p2)
{
	p1 = &a;
	p2 = &b;
	if(*p1 > *p2)
		printf ("%d\n",a);
	else
		printf("%d\n", b);
}