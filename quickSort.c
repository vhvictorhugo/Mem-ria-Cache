//	TRABALHO PRÁTICO 4 DE ORGANIZAÇÃO DE COMPUTADORES I - CCF 252
//	Professor: José Augusto M. Nacif
//	Membros:
//		Matheus da Silva Alves (2649);
//		Victor Hugo R. dos Santos (3510);

#include "header.h"

//============================== QUICK SORT ==============================

// Algoritmo disponibilizado pelo site: http://www.programasprontos.com/algoritmos-de-ordenacao/algortimo-quick-sort/

// Quick sort function
void quick_sort(int *a, int left, int right){
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}
