### Universidad de Costa Rica
#### Escuela de Ingeniería Eléctrica
#### Faculta de Ingeniería
#### IE0217-Estructuras de Abstractas de Datos y Algoritmos
##### Profesor: Esteban Badilla
##### Estudiante: Josué Salmerón Córdoba
##### I ciclo 2023
#### Tarea 2

## Resumen
> En esta tarea se aprovechó del prototipo de cada función o más bien de los prototipos de algoritmos de ordenamiento tales como BubbleSort, inserSort, selectionSort y quickSort. A partir de esto se implementaron su lógica para observar la función que realizan (que al final de cuentas es lo mismo) sin embargo, se analizó la complejidad que tiene cada uno de estos algoritmos usando la notación Big O, de donde BubbleSort posee más ventajas cuando trabaja un array pequeño. Mientras cuando se trabaja con un array grande, quickSort es muy eficiente, pero siempre habrá una mejor para estos casos como lo es el caso de MergeSort ya que posee una mejor estabilidad.

## Análisis de la notación Big O en cada algoritmo de ordenamiento.

- BubbleSort: Este algoritmo tiene una complejidad temporal en el peor de los caso de O(n2). Su complejidad espacial es de O(1). Por lo que el número de 
swaps en él es igual al número de pares de inversión en la matriz dada. Cuando los elementos del array son pocos, el algoritmo es muy eficiente.

- SelectionSort: posee un bajo rendimiento. Este algoritmo utiliza el método de selección y funciona en O(n^2) en el mejor, promedio y peor de los casos.

- insertionSort: Posee un rendimiento no tan bueno, usa el método de insercción que funciona a O(n) en el mejor de los casos. Por su parte, en el peor de los casos funciona a O(n^2).

- quickSort: su clasificación de comparación es inestable con un rendimiento mediocre. Quicksort utiliza el método de partición y puede funcionar, en el mejor de los casos y en promedio a: O(n log (n)). No obstante, puede funcionar en O(n^2) en el peor de los casos. Lo bueno de este algoritmo es que para arrays muy grandes es muy eficiente.

## Comandos para correr la tarea
- Basta con abrir un terminal dentro de la carpeta ``tareaDos``y escribir el siguiente comando:
```
make run
```

## Referencias.
> [Literatura consultada](https://big-o.io/)