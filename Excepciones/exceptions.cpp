/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

/**
 * @file exceptions.cpp
 * @author Josué Salmerón Córdoda
 * @brief Inicialmente, se hace un include de exceptions.hpp para hacer uso de la clase MyException, 
 * que apunta a un carácter constante y el valor del entero apuntado no puede cambiar. Por su parte what()
 * se usa para identificar una excepción dentro de un string.
 * 
 * Nota: Este archivo ha sido editado por mi persona pero ha sido tomado del usuario (ebadilla10) de
 * su perfil de Github. 
 * @version 0.1
 * @date 2023-05-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include "exceptions.hpp"

int main() {
/**
 * @brief Primero se hace el try de MyException, luego se lanza la excepción y después se le hace catch, para
 * luego imprimir el mensaje por consola y terminar el programa.
 * 
 */
  try {
    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  return 0;
}
