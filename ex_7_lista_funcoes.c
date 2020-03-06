int fat (int n){
	int i;
	int f = 1;
	for(i = 1;i <= n; i++)
		f *= i;
	return f;
}