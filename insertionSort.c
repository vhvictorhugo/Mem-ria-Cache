//	TRABALHO PRÁTICO 4 DE ORGANIZAÇÃO DE COMPUTADORES I - CCF 252
//	Professor: José Augusto M. Nacif
//	Membros:
//		Matheus da Silva Alves (2649);
//		Victor Hugo R. dos Santos (3510);

#include "header.h"

//============================== INSERTION SORT ==============================

// Algoritmo disponibilizado pelo site: https://www.geeksforgeeks.org/recursive-insertion-sort/

// Recursive function to sort an array using 
// insertion sort 
void insertionSort(int arr[], int n) 
{ 
    // Base case 
    if (n <= 1) 
        return; 
  
    // Sort first n-1 elements 
    insertionSort( arr, n-1 ); 
  
    // Insert last element at its correct position 
    // in sorted array. 
    int last = arr[n-1]; 
    int j = n-2; 
  
    /* Move elements of arr[0..i-1], that are 
      greater than key, to one position ahead 
      of their current position */
    while (j >= 0 && arr[j] > last) 
    { 
        arr[j+1] = arr[j]; 
        j--; 
    } 
    arr[j+1] = last; 
}


// modificação de algoritmo: passado para iterativo, que é da ordem O(n)
void insertionSort_modified(int arr[], int n){
    for (int i = 1; i < n; i++){
        int valor = arr[i];
        int j = i;

        while (j > 0 && arr[j - 1] > valor){
            arr[j] = arr[j - 1];
            j--;        
 
        arr[j] = valor;
        }
    }
}