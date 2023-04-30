// Importamos librerias para imprimir en al consola
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include "headerSort.hpp"
using namespace std;
#define DIM 7 // Definición tamaño del array.

void BubbleSort(int length, int arr[]) {

    int mod = 1;
    // variable temporal para guardar
    float temp = 0;
    do
    {
        mod = 0 ;
        for (int i = 0; i<length-1; i++ ) {
            if (arr[i]>arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                mod = 1;
            }
        }

    } while (mod);
}


void selectionSort(int length, int arr[]){
       int num_Min;

    for (int i = 0; i < DIM-1; i++)
    {
        num_Min = i;
        for (int j = i+1 ; j < DIM; j++)
        { 
            if (arr[j] < arr[num_Min])
            {
                num_Min = j;
            }
        }
        if(num_Min != i) {
            swap(arr[i], arr[num_Min]);
            }   
    }
}

void insertionSort(int length, int arr[]){
    int pos, temp, j;
    for (int i = 0; i < DIM; i++)
    {
        temp = arr[i];

    }
    for (int i = 1; i < DIM; i++)
    {
        j = i-1;
        pos = arr[i];
    
        while (arr[j]>pos && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pos;
    }
}


void quickSort(int arr[], int low, int high){

   int pivote;
   int i=low;
   int j=high;
   pivote = arr[(i+j)/2];
   while (i<=j){
    while (arr[i]<pivote){
        i++;
        }
    while (arr[j]>pivote){
        j--;
        }
    if (i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
        }
   }
   if (low<j)
   {
    quickSort(arr, low, j);
   }
   if(i<high){
        quickSort(arr, i, high);
    }

}
// Funcion para imprimir array
void print_array(int length, int arr[]) {
    for (int i = 0; i<length; i++) {
        cout<<arr[i]<<endl;
    }
}