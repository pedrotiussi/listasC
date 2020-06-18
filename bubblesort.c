#include<stdio.h>
#include <stdlib.h>

void imprimir_vetor(int *ptr, int tamanho) {
    for (int i = 0 ; i < tamanho ; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

}

void ordenar_crescente(int *ptr, int tamanho) {
    for (int i = 0; i < tamanho-1; i++) {
        for (int j = 0; j < tamanho-i-1; j++) {
            if (*(ptr+j) > *(ptr+j+1)) {
            int temp =  *(ptr+j);
            *(ptr+j)= *(ptr+ j+1);
                *(ptr+j+1) = temp;
            }
        }
    }
}

void ordenar_decrescente(int *ptr, int tamanho) {
    for (int i = 0; i < tamanho-1; i++) {
        for (int j = 0; j < tamanho-i-1; j++) {
            if (*(ptr+j) < *(ptr+j+1)) {
            int temp =  *(ptr+j);
            *(ptr+j)= *(ptr+ j+1);
            *(ptr+j+1) = temp;
            }
        }
    }
}

int main() {
    int dim;
    printf("Digite o tamanho do vetor de inteiros:");
    scanf("%d",&dim);

    int* v;
    v = malloc(dim * sizeof(int));

    for (int i=0 ; i<dim ; i++){
        printf("Digite o elemento %d do vetor:",i+1);
        scanf("%d", &v[i]);
    }

    printf("Vetor inserido:\n");
    imprimir_vetor(v, dim);

    printf("\nORDEM CRESCENTE:\n");
    ordenar_crescente(v, dim);
    imprimir_vetor(v, dim);

    printf("\nORDEM DECRESCENTE:\n");
    ordenar_decrescente(v, dim);
    imprimir_vetor(v, dim);

    free(v);

    return 0;
}

