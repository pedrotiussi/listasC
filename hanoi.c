#include <stdio.h>

int contador = 1;

void hanoi (int n, int from, int to){

	if (n>0){
		hanoi (n-1, from, 6-from-to);
		printf("%d--Mover de %d para %d\n", contador, from, to);
		contador++;
		hanoi (n-1, 6-from-to, to);
	}

}


int main (void){
	int n;

	printf ("Bem-vindo ao jogo da Torre de Hanoi\n\n\n");
	printf ("Insira a quantidade de peças do jogo: ");
	scanf("%d", &n);

	hanoi(n,1,3);

	return 0;
}