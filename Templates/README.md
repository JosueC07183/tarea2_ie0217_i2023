### Universidad de Costa Rica
#### Escuela de Ingeniería Eléctrica
#### Faculta de Ingeniería
#### IE0217-Estructuras de Abstractas de Datos y Algoritmos
##### Profesor: Esteban Badilla
##### Estudiante: Josué Salmerón Córdoba
##### I ciclo 2023
#### Tarea 2

## Resumen
> En esta segunda parte de la tarea2 se comentó el header que no era necesario para correr el código. Al parecer fueron 2: en este caso ``algorithm`` y ``vector``, pero resulta que vscode se quejaba ya que lo resaltaba en rojo pero luego omitía ese error el script corría sin ningún problema, en todo caso mejor se dejó tal como estaba. Después se realizaron los respectivos comentarios de clase Stack y sus métodos y atributos. También se declaró una nueva instancia donde se pueden ver sus valores a través de la consola. Y por último se implementó una instrucción que lanza la excepción ``out_of_range``, no obstante tanto su declaración como el ``catch`` se dejaron en forma de comentario.

## Desarrollo de la excepción creada.

- Básicamente lo que se hizo fue crear la instancia *t* y vaciar la pila sin que tuviera ningún elemento, lo cual hace un llamado a la excepción: ``out_of_range``, pero como se tiene un *catch*, entonces no hay un segmetation fault para el programa, lo que si sucede es que el script termina de manera inmediata.
## Comandos para correr la tarea
- Basta con abrir un terminal dentro de la carpeta ``Templates``y escribir el siguiente comando:
```
make
```