//	TRABALHO PRÁTICO 4 DE ORGANIZAÇÃO DE COMPUTADORES I - CCF 252
//	Professor: José Augusto M. Nacif
//	Membros:
//		Matheus da Silva Alves (2649);
//		Victor Hugo R. dos Santos (3510);

// ============ includes ============

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>
#define TAM 10

// ============ Cabeçalho de funções externas ============

void bubble_sort (int vetor[], int n);  // bubble

void radixsort(int array[], int size);  // radix

void quick_sort(int *a, int left, int right);   // quick

void insertionSort(int arr[], int n) ;  // insertion recursivo
void insertionSort_modified(int arr[], int n);   // insertion iterativo

// ============ Cabeçalho de funções internas ============

void swap(int *a, int *b);

int getMax(int array[], int n);
void countingSort(int array[], int size, int place);

