//	TRABALHO PRÁTICO 4 DE ORGANIZAÇÃO DE COMPUTADORES I - CCF 252
//	Professor: José Augusto M. Nacif
//	Membros:
//		Matheus da Silva Alves (2649);
//		Victor Hugo R. dos Santos (3510);

// ============ includes ============

#include "header.h"

// funcao que preenche vetor com valores aleatórios
void preencheVetor(int *vetor){
  int i;

  srand(time(NULL));

  for(i = 0; i < TAM; i++){
      vetor[i] = rand() % 100;
      printf("[%d] = %d\n", i, vetor[i]);
  }
}

// funcao que mostra o vetor na tela
void printVetor(int arr[], int n){
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int arr[TAM];

    int n = TAM;

    preencheVetor(arr);

    // descomentar a linha do codigo a ser executado
    //bubble_sort(arr, n);
    //radixsort(arr, n);
    //quick_sort(arr, 0, TAM - 1);
    insertionSort_modified(arr, n);
    //insertionSort(arr, n);

    printVetor(arr, n);

    return 0;
}