#include <stdio.h>

int soma_min_max (int *min, int *max){
	
	if (*min > *max){
		int aux;
		aux = *min;
		*min = *max;
		*max = aux;
	}

	return (*min + *max);
}

int main (void){
	int min, max;
	printf("Insira dois números:\n");
	scanf ("%d %d", &min, &max);

	int soma = soma_min_max (&min, &max);

	printf("Menor valor = %d\n", min);
	printf("Maior valor = %d\n", max);
	printf("Soma %d\n", soma);
	return 0;
}