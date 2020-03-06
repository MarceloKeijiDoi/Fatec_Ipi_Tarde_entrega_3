
int verifica (int v[], int n)
 { 
	if (n > 1) 
   	for (int i = 1; i < n; i++) 
      if (v[i-1] > v[i]) 
         return 0;     
      return 1; 
 }