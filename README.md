### Universidad de Costa Rica
#### Escuela de Ingeniería Eléctrica
#### Faculta de Ingeniería
#### IE0217-Estructuras de Abstractas de Datos y Algoritmos
##### Profesor: Esteban Badilla
##### Estudiante: Josué Salmerón Córdoba
##### I ciclo 2023
#### Tarea 2

## Resumen
> En esta tarea se divide en tres partes. La primera consiste en algoritmos de ordenamiento donde se hace un análisis de la notación Big O, donde se concluye que el mejor fue el bubbleSort debido a que se decidió trabajar con un array pequeño, aunque también se pudo usar un array más grande y comprobar que en este caso el quickSort tiene un mejor desempeño. La segunda parte de la tarea consistió en crear una nueva instancia con otro tipo de dato y por último se realizó una instrucción para disparar y hacerle *catch* a la excepción: ``out_of_range``. Por último, en la tercer parte se realizaron las separaciones del archivos de manera correcta así como los comentarios de la explicación del código donde finalmente se muestra un mensaje por consola sobre el tipo de excepción atrapada.

## Jerarquía de los archivos de la tarea.
Se ha hecho un *tree* desde la carpeta: **tarea2_ie0217_2023** para visualizar mejor la distribución de los directorios con sus respectivos archivos.
```
tarea2_ie0217_2023
├── Algoritmos
│   ├── headerSort.cpp
│   ├── headerSort.hpp
│   ├── main.cpp
│   ├── Makefile
│   └── README.md
├── Doxyfile
├── Excepciones
│   ├── exceptions.cpp
│   ├── exceptions.hpp
│   ├── Makefile
│   └── README.md
├── html
│   ├── .
│   ├── .
│   ├── .
├── latex
│   ├── .
│   ├── .
│   ├── .
├── README.md
└── Templates
    ├── Makefile
    ├── README.md
    └── stackTemplate.cpp
```
## Nota.
Las carpetas **html** y **latex** son muy extensas, por lo que se muestran puntos suspensivos para no hacer tan grande el presente archivo.
## Comandos para correr la tarea
- Basta con abrir un terminal dentro de las carpetas: **Algoritmos**, **Templates** y **Excepciones** y escribir el siguiente comando:
```
make
```