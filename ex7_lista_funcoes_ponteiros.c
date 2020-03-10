#include <stdio.h>

int fat (int n){
	int *p1, *p2;
	int f = 1;
	p1 = &n;
	p2 = &f;
	int i;
	for(i = 1;i <= *p1; i++)
		*p2 *= i;
	return f;
}