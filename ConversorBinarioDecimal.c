#include <stdio.h>
#include <stdlib.h>


int cabecalho (){
	printf("\nEscolha a opcao desejada:\n");
	printf("1 - Converter de binario para decimal\n");
	printf("2 - Converter de decimal para binario\n");
	printf("opcao: ");
	int opcao;
	scanf("%d", &opcao);
	return opcao;
}

void imprimirbinario (int numero){
	int binario[32];
	int i =0;
	printf("%d equivale a ", numero);
	while (numero > 0){
		binario[i] = numero % 2;
		numero /= 2;
		i++;
	}
	for (int j = i-1; j >= 0; j--){
		printf("%d", binario[j]);
	}

}

void imprimirdecimal (int numero) {
	int decimal = 0;
	int temporaria = 0;
	int pow = 1;
	int n = numero;

	while (n > 0){
		temporaria = n % 10;
		decimal += temporaria * pow;
		pow *= 2;
		n /= 10;
	}

	printf("%d equivale a %d\n", numero, decimal );
}


int main(void)
{
	/* code */
	int opcao, numero;
	char repetir;


	do{
	opcao = cabecalho ();
		switch (opcao){
			case 1: printf ("\nEntre com o numero binario: ");
					scanf ("%d", &numero);
					imprimirdecimal (numero);
					break;
			case 2: printf ("\nEntre com o numero decimal: ");
					scanf ("%d", &numero);
					imprimirbinario (numero);
					break;
			default: printf ("Opcao Invalida\n");

		}
		fflush(stdin);
		printf ("\nDeseja fazer outra conversao (S/N): ");
		fflush(stdin);
		scanf ("%c", &repetir);
		printf("%c\n", repetir);
	} while (repetir != 'N');

	printf("Fim do Programa\n");


	return 0;
}
