#include <stdio.h>
#include <iostream>
#include <algorithm>
#include "headerSort.hpp"
using namespace std;

/**
 * @brief Esto es la función main donde se hace el llamado de las funciones creadas en el
 * archivo header.cpp, aunque su prototipo se encuentra en el archivo header.hpp
 * 
 * @return int 
 */
int main() {
    
    int arr[DIM] = {2,8,5,3,9,4,1};
    cout<< "Impresión usando Bubble Sort" <<endl;
    BubbleSort(DIM, arr);
    print_array(DIM, arr);
    cout<< "-------------------------------------------" <<endl;
    /*cout<< "Impresión usando Selection Sort" <<endl;
    selectionSort(DIM, arr);
    print_array(DIM, arr);
    cout<< "-------------------------------------------" <<endl;
    cout<< "Impresión usando Insertion Sort" <<endl;
    insertionSort(DIM, arr);
    print_array(DIM, arr);
    cout<< "-------------------------------------------" <<endl;
    cout<< "Impresión usando Quick Sort" <<endl;
    quickSort(arr, 0, 6);
    print_array(DIM, arr);*/
    return 0;
}