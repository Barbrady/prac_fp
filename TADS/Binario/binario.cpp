#include<stdio.h>

const int N = 16;
typedef int TipoBinario[N];


void EnteroaBinario(int n, TipoBinario binario)  {
	for(int i=15; i>=0; i--)  {
		if(n == 1)  {
			binario[i] = 1;
		}
		else if(n == 0)  {
			binario[i] = 0;
		}
		else {
			binario[i] = n%2;
			n = n/2;
		}
	}
}


int main()  {
	TipoBinario binario;
	int n = 256;
	EnteroaBinario(n,binario);
	for(int i=0; i<N; i++)  {
		printf("%d ",binario[i]);
	}
	printf("\n");
}
