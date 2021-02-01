//	TRABALHO PRÁTICO 4 DE ORGANIZAÇÃO DE COMPUTADORES I - CCF 252
//	Professor: José Augusto M. Nacif
//	Membros:
//		Matheus da Silva Alves (2649);
//		Victor Hugo R. dos Santos (3510);

#include "header.h"

//============================== BUBBLE SORT ==============================

// Algoritmo disponibilizado pelo site: http://devfuria.com.br/logica-de-programacao/exemplos-na-linguagem-c-do-algoritmo-bubble-sort/

void bubble_sort (int vetor[], int n) {
    int k, j;

    for (k = 1; k < n; k++) {

        for (j = 0; j < n - 1; j++) {

            if (vetor[j] > vetor[j + 1])
                swap(&vetor[j], &vetor[j+1]);
        }
    }
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}