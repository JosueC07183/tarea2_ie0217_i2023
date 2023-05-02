#include <stdio.h>
#include <iostream>
#include <algorithm>
#include "headerSort.hpp"
using namespace std;
#define DIM 7

/**
 * @brief Acá se implementa la función de BubbleSort.
 */

void BubbleSort(int length, int arr[]) {
/**
 * @brief Se usa un ciclo for y un condicional para ir comparando cada elemento del arrray.
 * Como el primer no tiene nadie con quién compararse al lado izquierdo solo se compara con el 
 * de la derecha. Pero, el segundo elemento se debe comparse con los dos números (izquierda y derecha)
 * . Y así recursivamente hasta ordenarse, en cada iteración se hace swap de los números, dependiendo
 * de si es mayor o menor.
 * @param mod: identificador del bubbleSort.
 * @param temp: variable temporal a guardar. 
 */
    int mod = 1;
    float temp = 0;
    do
    {
        mod = 0 ;
        for (int i = 0; i<length-1; i++ ) {
            if (arr[i]>arr[i+1]) {
                swap(arr[i], arr[i+1]);
                mod = 1;
            }
        }

    } while (mod);
}
/**
 * @brief La idea es seleccionar el elemento más pequeño y colocarlo correctamente. 
 * Esa es la función del ciclo for, ir comparando cada elemento y si es menor, lo
 * desplaza a la izquierda, es decir, hace swap esto porque se tiene un condicional
 * encargado de esto.
 * @param num_Min: este es el elemento pequeño que se encuentra en cada iteración. 
 */
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
/**
 * @brief Consta de dos ciclos for, el primero se encarga de reco-
 * rrer la dimensión del array. Donde se usa la variable temp para
 * almacenarlo. El segundo loop for se encarga de ir decrementando
 * el recorrido de los elementos, y ahora la variable pos toma la
 * posición del array actual. Luego, el ciclo while se ejecutará 
 * siempre que sea mayor a cero y la posición actual sea mayor al 
 * que esta en la variable pos. 
 * 
 * @param pos: variable que guarda la posición actual del array.
 * @param temp: variable que almacena el array original.
 * @param j: contador que se decrementa conforme se recorre el array.
 * 
 */
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

/**
 * @brief Primeramente se define el pivote, haciendo el promedio del
 * array. Luego, con el primer while, se ejecuta mientras i sea menor a 
 * j, entonces se toma el elemento menor al pivote y se incrementa. Pero
 * el pivote tendrá elementos mayores a él, por eso se hacen a la derecha.
 * Una vez que se han divido los elementos, resulta que estos no están acomod-
 * ados pero gracias al swap es posible reordenarlos y el condicional toma 
 * el valor low(y el high) y lo compara, para usar la función quickSort, es decir, realizar 
 * toda el algoritmo de nuevo.
 * @param pivote: esta variable es la que se encarga de particionar el arreglo.
 * @param low: acá se guarda los elementos menores al pivote.
 * @param high: guarda los elementos mayores al pivote.
 */

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