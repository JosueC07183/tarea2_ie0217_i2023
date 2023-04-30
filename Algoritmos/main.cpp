#include <stdio.h>
#include <iostream>
#include <algorithm>
#include "headerSort.hpp"
using namespace std;


int main() {
    
    int arr[DIM] = {2,8,5,3,9,4,1};
    cout<< "Impresión usando Bubble Sort" <<endl;
    BubbleSort(DIM, arr);
    print_array(DIM, arr);
    cout<< "-------------------------------------------" <<endl;
    cout<< "Impresión usando Selection Sort" <<endl;
    selectionSort(DIM, arr);
    print_array(DIM, arr);
    cout<< "-------------------------------------------" <<endl;
    cout<< "Impresión usando Insertion Sort" <<endl;
    insertionSort(DIM, arr);
    print_array(DIM, arr);
    cout<< "-------------------------------------------" <<endl;
    cout<< "Impresión usando Quick Sort" <<endl;
    quickSort(arr, 0, 6);
    print_array(DIM, arr);
    return 0;
}